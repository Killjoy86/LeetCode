#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> sortAnagrams(vector<string>& target) {
        vector<string> tmp = target;
        for ( int i = 0; i < tmp.size(); i++ ) {
            sort(tmp[i].begin(), tmp[i].end());
        }
        return tmp;
    }
    
    vector< vector<string> > groupAnagrams(vector<string>& strs) {
        vector< vector<string> > sortingVector = sortAnagrams(strs);
        vector<vector<string>> result;
        
        for ( int i = 0; i < strs.size(); i++ ) {
            string tmp = strs[i];
        }
        
        return result;
    }
};

int main(int argc, char const *argv[]) {
    vector<string> vc = {"eat", "tea", "tan", "ate", "nat", "bat"};
    
    for ( auto& it : vc ) {
        cout << it << ' ';
    }
    cout << endl;
    
    return 0;
}
