class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int bestend=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int ch1=bestend+nums[i];
            int ch2=nums[i];
            bestend=max(ch1,ch2);
            ans=max(ans,bestend);
        }
        return ans;
    }
};