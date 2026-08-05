class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int lowest=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[n-1]){
                low=mid+1;
            }else{
                lowest=mid;
                high=mid-1;
            }
        }
        if(target==nums[lowest])return lowest;
        if (target >= nums[lowest] && target <= nums[n - 1]){
            low=lowest,high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]==target){
                    return mid;
                }else if(nums[mid]>target){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
        }else{
            low=0,high=lowest-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]==target){
                    return mid;
                }else if(nums[mid]>target){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
        }
        return -1;
    }
};