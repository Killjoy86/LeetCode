#include <iostream>
#include <vector>

using namespace std;

// class Solution {
// public:
//     int countPrimes(int n) {
//         if ( n <= 1 ) {
//             return 0;
//         }
//         vector<bool> primes(n, true);
//         for ( int i = 4; i < n; i += 2 ) {
//             primes[i] = false;
//         }
//         for ( int i = 3; i * i < n; i += 2 ) {
//             if ( primes[i] ) {
//                 for ( int j = 3; i * j < n; j += 2 ) {
//                     primes[i * j] = false;
//                 }
//             }
//         }
//         int counter = 0;
//         for ( int i = 2; i < n; i++ ) {
//             if ( primes[i] ) {
//                 counter++;
//             }
//         }
//         return counter;
//     }
// };

//-------------------------------------
//Algorithm "The Sieve of Eratosthenes"
//-------------------------------------
class Solution {
public:
    int countPrimes(int n) {
        if ( n <= 1 ) {
            return 0;
        }
        
        vector<int> primes;
        //Fill the vector<int> all numbers from 2 to n without even numbers
        for ( int i = 2; i <= n; i++ ) {
            if ( i % 2 == 0 && i != 2 )
                primes.push_back(0);
            else
                primes.push_back(i);
        }
        /**Eratosthenes algorithm
         * 1. Variable nextStart is 3 - the next prime number after 2.
         * 2. Run to circle from nextStart*nextStart to n with steps nextStart
         *    and all numbers on this path assign 0.
         * 3. Find the next number after nextStart and in nextStart assign this number
         * 4. Repeat steps 2 and 3 while nextStart*nextStart <= n.
         * 5. All numbers that are left in the array are prime numbers;
         */
        int nextStart = 3;
        while ( (nextStart*nextStart) <= n ) {
            for ( int j = nextStart*nextStart-2; j <= n; j += nextStart )
                primes[j] = 0;
            nextStart += 2;
        }
        
        //Counting prime numbers
        int counter = 0;
        for ( int i = 0; i < primes.size()-1; i++ ) {
            if ( primes[i] != 0 )
                counter++;
        }
        return counter;
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    
    int x;
    cin >> x; cin.ignore();
    int result = sol.countPrimes(x);
    
    cout << result << endl;
    
    return 0;
}
