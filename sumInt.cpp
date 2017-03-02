/*
Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.

Example:
Given a = 1 and b = 2, return 3. 
*/

#include <iostream>

using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        for ( ; b != 0; ) {
            int c = a & b;
            a ^= b;
            b = c << 1;
        }
        return a;
    }
};

int main(int argc, char *argv[]) {
    Solution sol;
    int result = sol.getSum(48, 720);
    
    cout << result << endl;
    
    return 0;
}
