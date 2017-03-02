/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example,
Given s = "Hello World",
return 5. 
*/
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdlib>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        string result;
        for ( int i = s.length()-1; i >= 0; i--) {
            if ( s[i] == ' ' ) {
                if ( result.length() == 0 ) {
                    continue;
                } else {
                    return result.length();
                }
            }
            result += s[i];
        }
        return result.length();
    }
};

int main(int argc, char const *argv[]) {
    string str = "Hello World";
    Solution sol;
    
    int answer = sol.lengthOfLastWord(str);
    cout << answer << endl;
    
    return 0;
}
