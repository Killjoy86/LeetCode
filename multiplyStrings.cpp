//Сложение и умножение двух строк без преобразования в int
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string strSum(string num1, string num2) {
        if ( num1.length() == 0 )
            return num2;
        if ( num2.length() == 0 )
            return num1;
        
        string result;
        if ( num1.length() < num2.length() )
            swap(num1, num2);
        
        int x;
        int holder = 0;
        for ( int i = num1.length()-1, j = num2.length()-1; i >= 0; i--, j-- ) {
            x = num1[i]-'0' + holder;
            if ( j >= 0 ) {
                x += num2[j]-'0';
            }
            result.insert(result.begin(), x % 10 + '0');
            holder = x / 10;
        }
        if ( holder > 0 ) {
            result.insert(result.begin(), holder % 10 + '0');
        }
        return result;
    }
    
    string multiply(string num1, string num2) {
        if ( num1.length() == 0 || num2.length() == 0 )
            return "";
        
        string result = "0";
        if ( num1.length() < num2.length() )
            swap(num1, num2);
        
        int x;
        string zero = "0";
        for ( int i = num1.length()-1, j = num2.length()-1; i >= 0; i--, j-- ) {
            string tmpStr = "";
            int holder = 0;
            if ( j >= 0 ) {
                for ( int k = num1.length()-1; k >= 0; k-- ) {
                    x = num2[j]-'0';
                    x = (x * (num1[k] - '0')) + holder;
                    tmpStr.insert(tmpStr.begin(), x % 10 + '0');
                    holder = x / 10;
                }
                if ( holder > 0 ) {
                    tmpStr.insert(tmpStr.begin(), holder % 10 + '0');
                }
                tmpStr += zero;
                result = strSum(result, tmpStr);
                zero += "0";
            }
        }
        result.pop_back();
        if ( result[0] == '0' )
            return "0";
        return result;
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    string answer = sol.multiply("9235", "0");
    cout << answer << endl;
    
    return 0;
}
