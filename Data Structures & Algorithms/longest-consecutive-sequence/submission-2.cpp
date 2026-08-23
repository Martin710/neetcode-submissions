class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int combo = 1;
        int maxcombo = 1;
        if(nums.empty()){
            return 0;
        }
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] - nums[i - 1] == 1){
                combo++;
            }
            else if(nums[i] - nums[i - 1] == 0){
                continue;
            }
            else{
                if(combo > maxcombo){
                     maxcombo = combo;
                }
                combo = 1;
            }
            maxcombo = max(maxcombo, combo);
        }

        return maxcombo;
    }
};
