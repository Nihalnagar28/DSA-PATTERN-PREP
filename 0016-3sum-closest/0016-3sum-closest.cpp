class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int maxdef=INT_MAX;
        int ressum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int low=i+1,high=n-1;
            while(low<high){
            int sum=nums[i]+nums[low]+nums[high];
            int def=abs(sum-target);
                if(sum==target){
                    return target;
                }
                if(def<maxdef){
                    maxdef=def;
                    ressum=sum;
                }
                if(sum<target){
                    low++;
                }
                if(sum>target){
                    high--;
                }
            }
        }
            return ressum;
    }
};