/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> tmp;
        for (int i = 0; i < s.length(); i ++) {
            if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{')) {
                tmp.push_back(s[i]);
            } else {
                if (tmp.size() == 0)
                    return false;
                char back = tmp.back();
                if (s[i] == ')') {
                    if (back != '(')
                        return false;
                } else if (s[i] == ']') {
                    if (back != '[')
                        return false;
                } else {
                    if (back != '{') 
                        return false;
                }
                tmp.pop_back();
            }
        }
        return tmp.size() == 0 ? true : false;
    }
};

int main(int argc, char *argv[]) {
    string start;
    cin >> start;
    
    Solution sol;
    
    if ( sol.isValid(start) ) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}
