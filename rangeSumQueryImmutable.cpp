/**
 * Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.
 *
 * Example:
 *
 * Given nums = [-2, 0, 3, -5, 2, -1]
 *
 * sumRange(0, 2) -> 1
 * sumRange(2, 5) -> -1
 * sumRange(0, 5) -> -3
 *
 * Note:
 *
 *    You may assume that the array does not change.
 *    There are many calls to sumRange function.
 *
 *----------------------------------------------------------------
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */

#include <iostream>
#include <vector>

using namespace std;

class NumArray {
private:
    vector<int> _nums;
public:
    NumArray(vector<int> nums) {
        this->_nums = nums;
    }
    
    int sumRange(int i, int j) {
        int result = 0;
        for ( ; i <= j; i++ ) {
            result += _nums[i];
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
    std::vector<int> vc = {-2, 0, 3, -5, 2, -1};
    
    NumArray *obj = new NumArray(vc);
    int i; cin >> i;
    int j; cin >> j;
    int param_1 = obj->sumRange(i, j);
    
    cout << param_1 << endl;
    
    return 0;
}
