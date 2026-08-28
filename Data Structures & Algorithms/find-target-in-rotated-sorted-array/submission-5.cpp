class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int l = 0;
        // int r = nums.size() - 1;
        // int mid;
        // while(l < r){
            
        //     mid = l + (r - l) / 2;

        //     if(nums[mid] > nums[r]){
        //         l = mid + 1;
        //     }
        //     else{
        //         r = mid;
        //     }
        // }
        // int pivot = l;
        // if(nums[pivot] <= target && nums[nums.size() - 1] >= target){
        //     l = pivot;
        //     r = nums.size() - 1;
        // }
        // else{
        //     l = 0;
        //     r = pivot - 1;
        // }
    
        // while(l <= r){
        //     mid = (l + r) / 2;
        //     if(nums[mid] == target){
        //         return mid;
        //     }
        //     if(nums[mid] > target){
        //         r = mid - 1;
        //     }
        //     else{
        //         l = mid + 1;
        //     }
        // }

        // return -1;

        int l = 0;
        int r = nums.size() - 1;
        int mid;
        while(l < r){
            mid = (l + r) / 2;
            if(nums[mid] <= nums[r]){
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }

        int pivot = l;
        l = 0;
        r= nums.size() - 1;
    
        if(nums[pivot] <= target && nums[r] >= target){
            l = pivot;
        }
        else{
            r = pivot - 1;
        }

        while(l <= r){
            mid = (l + r) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        return -1;
    }
};
