/*
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
 A P L S I I G
  Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:
string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR". 
*/


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if ( numRows <= 1 ) {
            return s;
        }
        vector<string> vs(numRows);
        int count = 0, step = 1;
        for ( int i = 0; i < s.length(); i++ ) {
            vs[count] += s[i];
            if ( count == 0 )
                step = 1;
            else if ( count == numRows-1 )
                step = -1;
            count += step;
        }
        s = "";
        for ( auto& it : vs ) {
            s += it;
        }
        return s;
    }
};

int main(int argc, char const *argv[]) {
    string str = "ABCDEFGHIJ";
    
    Solution sol;

    string st = sol.convert(str, 4);
    
    cout << st << endl;
    
    return 0;
}
