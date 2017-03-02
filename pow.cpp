#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        int symbol = 1;
        if( n == 0){
            return 1;
        }
        if ( n < 0 ) {
            n = -n;
            symbol = -1;
        }
        
        // return myPow(x*x, n/2);
        // if ( n % 2 == 0) {
        //     return symbol == 1 ? myPow(x*x, n/2) : (1 / (myPow(x*x, n/2)));
        // } else {
        //     return symbol == 1 ? (x * myPow(x*x, n/2)) : (1 / (x * myPow(x*x, n/2)));
        // }
    }
};
// 2.00000, -2147483648
int main(int argc, char const *argv[]) {
    Solution sol;
    long double result = sol.myPow(5, 2);
    
    cout << "Result: " << result << endl;
    
    return 0;
}
