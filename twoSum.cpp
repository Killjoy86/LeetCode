/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution.

Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

The return format had been changed to zero-based indices. Please read the above updated description carefully. 
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp;
        for ( int i = 0; i < nums.size()-1; i++ ) {
            for ( int j = i+1; j < nums.size(); j++ ) {
                if ( nums[i] + nums[j] == target ) {
                    temp = {i , j};
                }
            }
        }
        return temp;
    }
};

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int target = 6;
    
    Solution sol;
    
    vector<int> x = sol.twoSum(v, target);
    
    for ( int i = 0; i < x.size(); i++ ) {
        cout << x[i] << ' ';
    }
    cout << endl;
    
    return 0;
}
