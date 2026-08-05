class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        int res=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
           if(nums[n-1]<nums[mid]){
                low=mid+1;
           }else{
                res=nums[mid];
                high=mid-1;
           }
        }
        return res;
    }
};