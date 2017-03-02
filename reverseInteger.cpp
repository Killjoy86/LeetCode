/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321 
*/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
private:
    const int maxInt = 2147483647;
    const int minInt = -2147483647;
public:
    int reverse(int x) {
        int tmp = 0;
        for ( int i = x; i != 0; i /= 10 ) {
            if ( tmp > maxInt / 10 || tmp < minInt / 10 ) {
                return 0;
            } else {
                tmp = (tmp * 10) + (i % 10);
            }
        }
        return tmp;
    }
};

int main() {
    Solution sol;
    
    int x = sol.reverse(-2147483412);
    
    cout  << x << endl;
    
    return 0;
}
