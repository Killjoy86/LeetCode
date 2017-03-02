/*
Given a non-empty integer array of size n, find the minimum number of moves required to make all array elements equal, where a move is incrementing n - 1 elements by 1.

Example:

Input:
[1,2,3]

Output:
3

Explanation:
Only three moves are needed (remember each move increments two elements):
[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minValue (vector<int>& nums) {
        int min = nums[0];
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( min > nums[i] ) {
                min = nums[i];
            }
        }
        return min;
    }
    int minMoves(vector<int>& nums) {
        int minVal = minValue(nums);
        sort(nums.begin(), nums.end());
        int result = 0;
        for (const auto &i : nums) {
            result += abs(i - minVal);
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
    // vector<int> vc = {1, 2147483647};
    // vector<int> vc = {1, 1, 12};
    // vector<int> vc = {0,0};
    vector<int> vc = {1, 2, 3};
    
    Solution sol;
    int ans = sol.minMoves(vc);
    cout << "Answer = " << ans << endl;
    
    return 0;
}
