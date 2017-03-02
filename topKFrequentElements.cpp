/*
 Given a non-empty array of integers, return the k most frequent elements.

For example,
Given [1,1,1,2,2,3] and k = 2, return [1,2].

Note:

    You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
    Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
*/

#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        map<int, int> count;
        
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( count.find(nums[i]) == count.end() ) {
                count.insert(make_pair(nums[i], 1));
            } else {
                count[nums[i]]++;
            }
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> queueCount;
        for ( auto& it : count ) {
            queueCount.push(make_pair(it.second, it.first));
            if ( queueCount.size() > k ) {
                queueCount.pop();
            }
        }
        while ( !queueCount.empty() ) {
            result.push_back(queueCount.top().second);
            queueCount.pop();
        }

        return result;
    }
};

int main(int argc, char const *argv[]) {
    std::vector<int> vc = {1, 1, 1, 2, 3, 3};
    int k = 2;
    
    Solution sol;
    
    std::vector<int> answer = sol.topKFrequent(vc, k);
    
    for ( auto& it : answer ) {
        cout << it << ' ';
    }
    cout << endl;
    
    return 0;
}
