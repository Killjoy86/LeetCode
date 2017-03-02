/**
 * Given a positive integer, return its corresponding column title as appear in an Excel sheet.
 * 
 * For example:
 * 
 *     1 -> A
 *     2 -> B
 *     3 -> C
 *     ...
 *     26 -> Z
 *     27 -> AA
 *     28 -> AB 
 */
//65-90 A-Z
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string answer = "";
        for ( int i = n; i != 0; i = (i - 1) / 26 ) {
            answer += (i - 1) % 26 + 'A';
        }
        reverse(answer.begin(), answer.end());
        
        return answer;
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    
    int num;
    cin >> num; cin.ignore();
    
    string answer = sol.convertToTitle(num);
    
    cout << answer << endl;
    
    return 0;
}
