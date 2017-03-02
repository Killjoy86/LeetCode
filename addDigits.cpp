/*
 Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

Follow up:
Could you do it without any loop/recursion in O(1) runtime? 
*/

#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if ( num < 10 ) {
            return num;
        }
        int temp = 0;
        for ( int i = num; i != 0; i /= 10 ) {
            temp += i % 10;
        }
        return addDigits(temp);
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    
    int res = sol.addDigits(38);
    
    cout << res << endl;
    
    return 0;
}
