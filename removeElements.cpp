/*
Given an array and a value, remove all instances of that value in place and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example:
Given input array nums = [3,2,2,3], val = 3

Your function should return length = 2, with the first two elements of nums being 2.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( nums[i] == val ) {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};

int main(int argc, char const *argv[]) {
    vector<int> vec;
    
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(3);
    
    Solution sol;
    int x = sol.removeElement(vec, 3);
    
    for ( auto& it : vec ) {
        cout << it << ' ';
    }
    cout << endl;
    
    cout << "Size: " << x << endl;
    
    return 0;
}
