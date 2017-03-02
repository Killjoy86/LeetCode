/*
 Given an array of integers with possible duplicates, randomly output the index of a given target number. You can assume that the given target number must exist in the array.

Note:
The array size can be very large. Solution that uses too much extra space will not pass the judge.

Example:

int[] nums = new int[] {1,2,3,3,3};
Solution solution = new Solution(nums);

// pick(3) should return either index 2, 3, or 4 randomly. Each index should have equal probability of returning.
solution.pick(3);

// pick(1) should return 0. Since in the array only nums[0] is equal to 1.
solution.pick(1);
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Solution {
private:
    vector<int> _nums;
    vector<int> _indexes;
public:
    Solution(vector<int> nums) {
        srand(time(NULL));
        this->_nums = nums;
    }
    
    int pick(int target) {
        for ( int i = 0; i < _nums.size(); i++ ) {
            if ( _nums[i] == target ) {
                _indexes.push_back(i);
            }
        }
        return _indexes[rand() % _indexes.size()];
    }
};

int main(int argc, char const *argv[]) {
    vector<int> vc = {1, 2, 3, 3, 3};
    
    Solution *solution = new Solution(vc);
    
    cout << solution->pick(2) << endl;
    
    delete solution;
    
    return 0;
}
