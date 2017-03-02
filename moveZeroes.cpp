/*
 Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
    1. You must do this in-place without making a copy of the array.
    2. Minimize the total number of operations.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for ( int i = nums.size()-1; i >= 0; i-- ) {
            if ( nums[i] == 0 ) {
                int tmp = nums[i];
                nums.erase(nums.begin()+i);
                nums.push_back(tmp);
            }
        }
    }
};

int main(int argc, char const *argv[]) {
    vector<int> vc = {0, 0, 1};
    Solution sol;
    
    sol.moveZeroes(vc);
    
    for ( auto& it : vc ) {
        cout << it << ' ';
    }
    cout << endl;
    
    return 0;
}
