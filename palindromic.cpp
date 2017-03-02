//Largest palindrome made from the product of two 2, 3 and 4-digit numbers.
#include <iostream>
#include <cmath>
#include <vector>

#define NUM 999

bool isPalindrome(int value) {
    if ( value < 0 ) {
        return false;
    }
    int temp = 0;
    for ( int i = value; i != 0; i /= 10 ) {
        temp = (temp * 10) + (i % 10);
    }
    
    return value == temp;
}

int main() {
    long long int maxPal = 0;
    int multiplicand;
    int multiplier;

    int places = -1;
    for ( int pl = NUM; pl != 0; pl /= 10 ) {
        places += 1;
    }
    int end = pow(10, places);
    
    for ( int i = NUM; i > end; i-- ) {
        for ( int j = i; j > end; j-- ) {
            int tmp = i * j;
            if ( isPalindrome(tmp) && maxPal < tmp ) {
                maxPal = tmp;
                multiplicand = i;
                multiplier = j;
            }
        }
    }
    std::cout << "Number is " << maxPal << " = " << multiplicand << " * " << multiplier << std::endl;
    
    return 0;
}
