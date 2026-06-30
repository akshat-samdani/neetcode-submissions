class Solution {
public:
    // Comparator for min-heap by frequency
    struct Compare {
        bool operator()(const pair<int,int>& a, const pair<int,int>& b) const {
            return a.first > b.first; // min-heap based on frequency
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Count frequencies
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> minHeap;

        // Iterate over all (num, freq) pairs
        for (const pair<const int,int>& p : freq) {
            // push (frequency, number)
            minHeap.push({p.second, p.first});
            if ((int)minHeap.size() > k) minHeap.pop();
        }

        // Extract results
        vector<int> res;
        while (!minHeap.empty()) {
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        // Optional: reverse to have most frequent first
        reverse(res.begin(), res.end());
        return res;

    }
};
