/*
 Given two strings s and t which consist of only lowercase letters.

String t is generated by random shuffling string s and then add one more letter at a random position.

Find the letter that was added in t.
*/

#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        char res;
        for ( int i = 0; i < t.length(); i++ ) {
            if ( i == s.length() ) {
                res = t[i];
                break;
            } else if ( s[i] != t[i] ) {
                res = t[i];
                break;
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) {
    Solution sol;
    string str = "a b c";
    string str1 = "a b zc";
    
    char x = sol.findTheDifference(str, str1);
    cout << x << endl;
    
    return 0;
}
