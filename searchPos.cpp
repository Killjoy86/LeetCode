/*
Given a sorted array and a target value,
return the index if the target is found.
If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if ( target > nums.back() ) {
            return nums.size();
        }
        
        for ( int i = 1; i < nums.size(); i++ ) {
            if ( nums[i] == target || (target > nums[i-1] && target < nums[i]) ) {
                return i;
            }
        }
        return 0;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> vc;
    vc.push_back(1);
    vc.push_back(3);
    vc.push_back(5);
    vc.push_back(6);
    
    Solution sol;
    int result = sol.searchInsert(vc, 4);
    
    cout << '[';
    for ( int i = 0; i < vc.size()-1; i++ ) {
        cout << vc[i] << ", ";
    }
    cout << vc[vc.size()] << ']' << endl;
    
    cout << "Result: " << result << endl;
    
    return 0;
}
