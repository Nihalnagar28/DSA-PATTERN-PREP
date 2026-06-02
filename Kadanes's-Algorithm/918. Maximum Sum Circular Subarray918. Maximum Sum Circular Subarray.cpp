class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int maxres=nums[0];
        int minsum=nums[0];
        int minres=nums[0];
        int sum=nums[0];

        for(int i=1;i<n;i++){
            sum+=nums[i];
            maxsum=max(maxsum+nums[i],nums[i]);
            maxres=max(maxsum,maxres);
            minsum=min(minsum+nums[i],nums[i]);
            minres=min(minsum,minres);
        }
        if(maxres<0)return maxres;
        return max(sum-minres,maxres);
    }
};