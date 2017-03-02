/*
Given an array of integers sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).
If the target is not found in the array, return [-1, -1].

For example,
Given [5, 7, 7, 8, 8, 10] and target value 8,
return [3, 4]. 
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> tmp;
        
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( nums[i] == target ) {
                tmp.push_back(i);
                break;
            }
        }
        for ( int i = nums.size()-1; i >= 0; i-- ) {
            if ( nums[i] == target ) {
                tmp.push_back(i);
                break;
            }
        }
        if ( tmp.empty() ) {
            tmp.push_back(-1);
            tmp.push_back(-1);
        }
        return tmp;
    }
};

int main(int argc, char const *argv[]) {
    std::vector<int> vc;
    std::vector<int> result;
    vc.push_back(5);
    vc.push_back(7);
    vc.push_back(7);
    vc.push_back(8);
    vc.push_back(8);
    vc.push_back(10);
    
    Solution sol;
    result = sol.searchRange(vc, 8);
    
    for ( auto& it : result )
        cout << it << ' ';
    cout << endl;
    
    return 0;
}
