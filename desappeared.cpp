/*
Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements of [1, n] inclusive that do not appear in this array.

Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

Example:

Input:
[4,3,2,7,8,2,3,1]

Output:
[5,6]
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[abs(nums[i]) - 1] > 0) {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }
        vector<int> disappeared;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                disappeared.emplace_back(i + 1);
            } else {
                nums[i] *= -1;
            }
        }
        return disappeared;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> vc;
    // vc.push_back(1);
    // vc.push_back(1);
    vc.push_back(4);
    vc.push_back(3);
    vc.push_back(2);
    vc.push_back(7);
    vc.push_back(8);
    vc.push_back(2);
    vc.push_back(3);
    vc.push_back(1);
    
    vector<int> result;
    Solution sol;
    
    result = sol.findDisappearedNumbers(vc);
    
    for ( auto& it : result ) {
        cout << it << ' ';
    }
    cout << endl;
    
    return 0;
}
