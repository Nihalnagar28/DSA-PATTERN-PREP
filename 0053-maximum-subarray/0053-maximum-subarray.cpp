class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int largestsum=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int ch1=nums[i];
            int ch2=nums[i]+largestsum;
            largestsum=max(ch1,ch2);
            ans=max(largestsum,ans);
        }
        return ans;
    }
};