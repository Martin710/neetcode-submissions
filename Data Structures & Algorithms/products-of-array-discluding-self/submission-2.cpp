class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> result, prefix, suffix;
        int pre_product = 1;
        int suf_product = 1;

        for(int i = 0 ; i < nums.size(); i++){
            prefix.push_back(pre_product);
            pre_product *= nums[i];
        }

        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            suffix.push_back(suf_product);
            suf_product *= nums[i];
        }

        for(int i = 0 ; i < nums.size(); i++){
            result.push_back(prefix[i] * suffix[nums.size() - i - 1]);
        }
        return result;
    }
};
