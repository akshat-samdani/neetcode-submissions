class Solution {
public:
    struct Compare {
        bool operator()(const pair<int, int>& a, 
        const pair<int, int>& b) const {
            return a.first > b.first;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num: nums) {
            freq[num]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> minHeap;

        for (const pair<int, int>& p: freq) {
            minHeap.push({p.second, p.first});
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> res;
        while(!minHeap.empty()) {
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        reverse(res.begin(), res.end());
        return res;

        
    }
};
