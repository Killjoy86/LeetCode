/*
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? 
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = nums[0];
        for ( int i = 1; i < nums.size(); i++ ) {
            result ^= nums[i];
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> vc = {1, 1, 2, 7, 2};
    
    Solution sol;
    int res = sol.singleNumber(vc);
    
    cout << res << endl;
    
    return 0;
}
