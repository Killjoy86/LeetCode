/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

For example,
Given [0,1,0,2,1,0,1,3,2,1,2,1], return 6.

 ^
3|                    +--+
 |                    |  |
2|        +--+// // //|  +--+//+--+
 |        |  |// // //|  |  |//|  |
1|  +--+//|  |--+//+--+  |  +--+  |--+
 |  |  |//|  |  |//|  |  |  |  |  |  |
0|------------------------------------->
   0  1  0  2  1  0  1  3  2  1  2  1
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int max = 0;
        int maxIndex = 0;
        int result = 0;
        
        for ( int i = 0; i < height.size(); i++ ) {
            if ( max < height[i] ) {
                max = height[i];
                maxIndex = i;
            }
        }

        int point = 0;
        for ( int i = 0; i < maxIndex; i++ ) {
            if ( height[i] > point ) {
                point = height[i];
            }
            result += (point - height[i]);
        }
        point = 0;
        for ( int i = height.size()-1; i > maxIndex; i-- ) {
            if ( height[i] > point ) {
                point = height[i];
            }
            result += (point - height[i]);
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> vc = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    vector<int> vc1 = {3, 0, 3, 0, 3, 0, 3};
    int result, result1;
    
    Solution sol;
    result = sol.trap(vc);
    result1 = sol.trap(vc1);
    
    cout << "Answer: " << result << endl;
    cout << "Answer1: " << result1 << endl;
    
    return 0;
}
