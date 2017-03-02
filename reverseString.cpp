/*
Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh". 
*/

#include <iostream>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
        string tmp;
        for ( int i = s.length()-1; i >= 0; i-- ) {
            tmp += s[i];
        }
        return tmp;
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    
    string str = sol.reverseString("hello");
    
    cout << str << endl;
    
    return 0;
}
