class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int res=0;
        while(low<=high){
            int mid=low+(high-low)/2;
           if(nums[mid]==target)return mid;
            else if(nums[mid]>target){
                high=mid-1;
            }else if(nums[mid]<target){
                low=mid+1;
            }
        }
        if(res==0)return -1;
        return res;
    }
};