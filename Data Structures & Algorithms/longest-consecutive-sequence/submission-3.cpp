class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int combo = 0;

        for(int num : set){
            if(!set.count(num - 1)){
                int length = 1;
                while(set.count(num + 1)){
                    num++;
                    length++;
                }
                combo = max(combo, length);
            }

            
        }

        return combo;
    }
};
