class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> result(n), prefix(n), suffix(n);
        int pre_product = 1;
        int suf_product = 1;

        for(int i = 0 ; i < nums.size(); i++){
            prefix[i] = pre_product;
            pre_product *= nums[i];
        }

        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            suffix[i] = suf_product;
            suf_product *= nums[i];
        }

        for(int i = 0 ; i < nums.size(); i++){
            result[i] = prefix[i] * suffix[i];
        }
        return result;
    }
};
