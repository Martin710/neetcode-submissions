class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = 0;
        int max_value = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(current < 0){
                current = nums[i];
            }
            else{
                current+=nums[i];
            }

            max_value = max(max_value, current);
            
        }

        return max_value;
    }
};
