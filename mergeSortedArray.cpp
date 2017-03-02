/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = nums1.size();
        for ( int i = 0; i < m; i++ ) {
            nums2.push_back(nums1[i]);
        }
        sort(nums2.begin(), nums2.end());
        nums1.clear();
        for ( int i = 0; i < size; i++ ) {
            nums1.push_back(nums2[i]);
        }
    }
};

int main(int argc, char const *argv[]) {
    vector<int> vc1 = {1, 2, 7};
    vector<int> vc2 = {3, 8, 9};
    
    Solution sol;
    sol.merge(vc1, 3, vc2, 3);
    
    for ( auto& it : vc1 ) {
        cout << it << ' ';
    }
    cout << endl;
    
    return 0;
}
