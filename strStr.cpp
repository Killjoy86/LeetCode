/*
Implement strStr().

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack. 
*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t tmp = haystack.find(needle);
        if ( tmp != std::string::npos ) {
            return tmp;
        } else {
            return -1;
        }
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    int x = sol.strStr("1235468aaa", "aaa");
    cout << x << endl;
    
    return 0;
}
