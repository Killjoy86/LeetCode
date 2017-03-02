/*
The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string. 
*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class Solution {
public:
    string vectToString(vector<int>& vc) {
        stringstream ss;
        for(int i = 0; i < vc.size(); i++) {
            ss << vc[i];
        }
        return ss.str();
    }
    
    string countAndSay(int n) {
        if ( n == 0 )
            return "";
        if ( n == 1 )
            return "1";
        
        int value = 1;
        vector<int> currentLine(1, value);
        vector<int> nextLine;
        int counter = 0;

        for ( int i = 0; i < n - 1; i++ ) {
            for ( int j = 0; j < currentLine.size(); j++ ) {
                if ( currentLine[j] == value ) {
                    counter++;
                    if ( j + 1 == currentLine.size() ) {
                        nextLine.push_back(counter);
                        nextLine.push_back(currentLine[j]);
                    }
                } else {
                    nextLine.push_back(counter);
                    counter = 1;
                    nextLine.push_back(value);
                    value = currentLine[j];
                    if ( j + 1 == currentLine.size() ) {
                        nextLine.push_back(counter);
                        nextLine.push_back(currentLine[j]);
                    }
                }
            }
            currentLine.clear();
            currentLine.swap(nextLine);
            value = currentLine[0];
            counter = 0;
        }
        
        return vectToString(currentLine);
    }
};

int main(int argc, char *argv[]) {
    Solution sol;
    
    int target;
    cin >> target;
    
    string answer = sol.countAndSay(target);
    cout << answer << endl;
    
    return 0;
}
