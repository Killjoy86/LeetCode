/*
 For a web developer, it is very important to know how to design a web page's size. So, given a specific rectangular web page’s area, your job by now is to design a rectangular web page, whose length L and width W satisfy the following requirements:

1. The area of the rectangular web page you designed must equal to the given target area.

2. The width W should not be larger than the length L, which means L >= W.

3. The difference between length L and width W should be as small as possible.

You need to output the length L and the width W of the web page you designed in sequence.
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        std::vector<int> vc;
        for ( int i = sqrt(area); i > 0; i-- ) {
            if ( area % i == 0 ) {
                vc.push_back(area/i);
                vc.push_back(i);
                break;
            }
        }
        return vc;
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    
    std::vector<int> vc = sol.constructRectangle(36);
    
    for ( auto& it : vc ) {
        cout << it << ' ';
    }
    cout << endl;
    
    return 0;
}
