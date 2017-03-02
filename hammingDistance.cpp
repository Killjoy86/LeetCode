#include <iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        while ( x != 0 || y != 0 ) {
            if ( (x&0x1) != (y&0x1) )
                count++;
            x = x>>1;
            y = y>>1;
        }
        return count;
    }
};

int main(int argc, char const *argv[]) {
    // Solution sol;
    // int answer = sol.hammingDistance(1, 4);
    int x = 4;
    cout << (x&0x1) << endl;
    return 0;
}
