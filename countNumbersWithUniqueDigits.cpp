/*
Given a non-negative integer n, count all numbers with unique digits, x, where 0 ≤ x < 10n.

Example:
Given n = 2, return 91. (The answer should be the total numbers in the range of 0 ≤ x < 100, excluding [11,22,33,44,55,66,77,88,99]) 
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0)
            return 1;

        int ans = 10;
        int tmp = 9;
        for ( int i = 1; i < n; i++ ) {
            tmp *= (10 - i);
            ans += tmp;
        }
        
        return ans;
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    
    int res = sol.countNumbersWithUniqueDigits(5);
    
    cout << res << endl;
    
    return 0;
}
