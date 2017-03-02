/*
Shuffle a set of numbers without duplicates.

Example:

// Init an array with set 1, 2, and 3.
int[] nums = {1,2,3};
Solution solution = new Solution(nums);

// Shuffle the array [1,2,3] and return its result. Any permutation of [1,2,3] must equally likely to be returned.
solution.shuffle();

// Resets the array back to its original configuration [1,2,3].
solution.reset();

// Returns the random shuffling of array [1,2,3].
solution.shuffle();
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

class Solution {
private:
    vector<int> nums;
    vector<int> sol;
public:
    Solution(vector<int> nums) {
        srand(time(NULL));
        this->nums = nums;
        this->sol = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        this->sol = this->nums;
        return this->sol;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        for ( int i = 0; i < this->sol.size(); i++ ) {
            swap(this->sol[i], this->sol[rand() % this->sol.size()]);
        }
        return this->sol;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> vc = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    Solution *solution = new Solution(vc);
    
    vector<int> result = solution->shuffle();
    cout << "Shuffled array:" << endl;
    for ( auto& it : result ) {
        cout << it << ' ';
    }
    cout << endl;
    
    result = solution->reset();
    cout << "Reseted array:" << endl;
    for ( auto& it : result ) {
        cout << it << ' ';
    }
    cout << endl;
    
    result = solution->shuffle();
    cout << "Shuffled array:" << endl;
    for ( auto& it : result ) {
        cout << it << ' ';
    }
    cout << endl;
    
    delete solution;
    
    return 0;
}
