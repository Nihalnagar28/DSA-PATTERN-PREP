class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int minsize=INT_MAX;
        int sum=0;
        for(int high=0;high<n;high++){
            sum+=nums[high];
            while(sum>=target){
                int len=high-low+1;
                minsize=min(len,minsize);
                sum-=nums[low];
                low++;
            }
        }
        if(minsize==INT_MAX)return 0;
        return minsize;
    }
};