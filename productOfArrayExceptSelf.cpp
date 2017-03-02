/*
 Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Solve it without division and in O(n).

For example, given [1,2,3,4], return [24,12,8,6]. 
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> output;
        int tmp = 1;
        
        output.push_back(tmp);
        for( int i = 1; i < nums.size(); i++ ) {
            tmp *= nums[i-1];
            output.push_back(tmp);
        }
        
        tmp = 1;
        for ( int i = nums.size()-2; i >= 0; i-- ) {
            tmp *= nums[i+1];
            output[i] = output[i] * tmp;
        }
      
        return output;
    }
};

int main(int argc, char const *argv[]) {
    std::vector<int> vc = {1, 2, 3, 4};
    Solution sol;
    
    std::vector<int> answer = sol.productExceptSelf(vc);
    
    for ( auto& it : answer ) {
        cout << it << ' ';
    }
    cout << endl;
    
    return 0;
}
