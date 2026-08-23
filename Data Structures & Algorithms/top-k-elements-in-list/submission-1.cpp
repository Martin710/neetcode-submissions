class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int n : nums){
            freq[n]++;
        }

        vector<pair<int, int>> items;

        for(const auto& [number, count] : freq){
            items.push_back({count, number});
        }
        sort(items.rbegin(), items.rend());

        vector<int> result;

        for(int i = 0; i < k ; i++){
            result.push_back(items[i].second);
        }

        return result;
    }
};
