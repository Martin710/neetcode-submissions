class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> set(nums.begin(), nums.end());
        int combo = 0;

        for(int num : set){
            if(!set.count(num - 1)){
                int current = num;
                int length = 1;

                while(set.count(current + 1)){
                    current++;
                    length++;
                }

                combo = max(combo, length);
            }

            
        }

        return combo;
    }
};
