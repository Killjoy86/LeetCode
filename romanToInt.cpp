/*
Given a roman numeral, convert it to an integer.
Input is guaranteed to be within the range from 1 to 3999.
*/

#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        char previous = ' ';
        int result = 0;
        
        for ( int i = 0; i < s.length(); i++ ) {
            if ( s[i] == 'I' )
                result += 1;
            if ( s[i] == 'V' && previous == 'I' )
                result += 3;
            if ( s[i] == 'V' && previous != 'I' )
                result += 5;
            if ( s[i] == 'X' && previous == 'I' )
                result += 8;
            if ( s[i] == 'X' && previous != 'I' )
                result += 10;
            if ( s[i] == 'L' && previous == 'X' )
                result += 30;
            if ( s[i] == 'L' && previous != 'X' )
                result += 50;
            if ( s[i] == 'C' && previous == 'X' )
                result += 80;
            if ( s[i] == 'C' && previous != 'X' )
                result += 100;
            if ( s[i] == 'D' && previous == 'C' )
                result += 300;
            if ( s[i] == 'D' && previous != 'C' )
                result += 500;
            if ( s[i] == 'M' && previous == 'C' )
                result += 800;
            if ( s[i] == 'M' && previous != 'C' )
                result += 1000;
            
            previous = s[i];
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    
    int x = sol.romanToInt("IM");
    
    cout << x << endl;
    
    return 0;
}
