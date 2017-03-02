/*
Permutations I

Given a collection of distinct numbers, return all possible permutations.

For example,
  [1,2,3] have the following permutations:
*/
//-------------------------------------------------
/*
Permutations II
Given a collection of numbers that might contain duplicates, return all possible unique permutations.

For example,
[1,1,2] have the following unique permutations:

[
  [1,1,2],
  [1,2,1],
  [2,1,1]
]
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector< vector<int> > permute(vector<int>& nums) {
        vector< vector<int> > result;
        sort(nums.begin(), nums.end());
        result.push_back(nums);
        
        while ( next_permutation(nums.begin(),nums.end()) ) {
            vector<int> tmp;
            for ( int i = 0; i < nums.size(); i++ ) {
                tmp.push_back(nums[i]);
            }
            result.push_back(tmp);
        }
        return result;
    }
};

int main(int argc, char const *argv[]){
    vector<int> vs;
    vs.push_back(1);
    vs.push_back(1);
    vs.push_back(2);
    vector< vector<int> > res;
    
    // for ( int i = 1; i <= 4; i++ ) {
    //     vs.push_back(i);
    // }
    
    Solution sol;
    res = sol.permute(vs);
    
    for (int i = 0; i < res.size(); ++i) {
        for (int j = 0; j < vs.size(); ++j) {
            cout << res[i][j] << ' ';
        }
        cout << '\n';
    }

    
    return 0;
}
