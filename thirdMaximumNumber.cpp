/*
Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the maximum number. The time complexity must be in O(n).

Example 1:

Input: [3, 2, 1]

Output: 1

Explanation: The third maximum is 1.

Example 2:

Input: [1, 2]

Output: 2

Explanation: The third maximum does not exist, so the maximum (2) is returned instead.

Example 3:

Input: [2, 2, 3, 1]

Output: 1

Explanation: Note that the third maximum here means the third maximum distinct number.
Both numbers with value 2 are both considered as second maximum.
*/
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> tmp(3, numeric_limits<int>::min());
        int counter = 0;
        bool flag = false;
        for ( const auto& it : nums ) {
            if ( tmp[0] < it ) {
                tmp[2] = tmp[1];
                tmp[1] = tmp[0];
                tmp[0] = it;
                counter++;
            } else if ( it != tmp[0] && it > tmp[1] ) {
                tmp[2] = tmp[1];
                tmp[1] = it;
                counter++;
            } else if ( it != tmp[0] && it != tmp[1] && it > tmp[2] ) {
                tmp[2] = it;
                counter++;
            } else if( it == numeric_limits<int>::min() && counter < 3 && !flag ) {
                counter++;
                flag = true;
            }
        }

        if ( counter >= 3 ) {
            return tmp[2];
        }
        return tmp[0];
    }
};

int main(int argc, char const *argv[]) {
    // vector<int> vc = {1,-2147483648,2};
    // vector<int> vc = {1, 2, -2147483648};
    // vector<int> vc = {-2147483648,-2147483648,-2147483648,-2147483648,1,1,1};
    // vector<int> vc = {1, 1, 2};
    // vector<int> vc = {5, 2, 2};
    /*---------------------------------------*/
    vector<int> vc;
    for ( int i = 0; i < 50; i++ ) {
        int x;
        cin >> x; cin.ignore();
        vc.push_back(x);
    }
    
    
    Solution sol;
    
    cout << sol.thirdMax(vc) << endl;
    
    return 0;
}
