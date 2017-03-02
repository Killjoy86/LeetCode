/*
Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Example:

Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    //Slow decision
    // vector<int> findDuplicates(vector<int>& nums) {
    //     vector<int> result;
    //     sort(nums.begin(), nums.end());
    //     int prev = nums[0];
    //     for ( int i = 1; i < nums.size(); i++ ) {
    //         if ( nums[i] == prev ) {
    //             result.push_back(prev);
    //         }
    //         prev = nums[i];
    //     }
    //     return result;
    // }
    
    //Fast decision
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        int index;
        for ( int i = 0;i < nums.size(); i++ ) {
            index = abs(nums[i]) - 1;
            if ( nums[index] > 0 ) {
                nums[index] *= -1;
            } else {
                result.push_back(index + 1);
            }
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    std::vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result = sol.findDuplicates(nums);
    
    for ( auto& it : result ) {
        cout << it << ' ';
    }
    cout << endl;
    
    return 0;
}
