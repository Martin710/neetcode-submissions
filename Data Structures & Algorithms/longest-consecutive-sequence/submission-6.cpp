class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> numbers(nums.begin(), nums.end());
        int combo = 0;

        for(int num : numbers){
            if(!numbers.count(num - 1)){
                int length = 1;

                while(numbers.count(num + 1)){
                    num++;
                    length++;
                }

                combo = max(combo, length);
            }

            
        }

        return combo;
    }
};
