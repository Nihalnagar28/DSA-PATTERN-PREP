class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int minlen=INT_MAX;
        int sum=0;
        int low=0,high=0;
        for(int high=0;high<n;high++){
            sum+=nums[high];
            while(sum>=target){
            int len=high-low+1;
                minlen=min(len,minlen);
                sum-=nums[low];
                low++;
            }
        }
        if(minlen==INT_MAX)return 0;
        return minlen;
    }
};