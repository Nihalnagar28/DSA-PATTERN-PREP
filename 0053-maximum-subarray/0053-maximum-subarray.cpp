class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int lsum=nums[0];
        for(int i=1;i<n;i++){
            int ch1=nums[i];
            int ch2=nums[i]+lsum;
            lsum=max(ch1,ch2);
            maxsum=max(lsum,maxsum);
        }
        return maxsum;
    }
};