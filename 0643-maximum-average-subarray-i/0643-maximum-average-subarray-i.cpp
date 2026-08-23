class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,high=k-1;
        double maxavg=INT_MIN;
        double sum=0;
        for(int i=low;i<=high;i++){
          sum+=nums[i];
        }
        while(high<n){
            maxavg=max(maxavg,sum/k);
            sum-=nums[low];
            low++;
            high++;
            if(high==n)break;
            sum+=nums[high];
        }
        return maxavg;
    }
};