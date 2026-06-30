class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0,high=k-1,n=nums.size();
        double sum=0;
        for(int i=low;i<=high;i++){
            sum+=nums[i];
        }
        double res=sum;
        while(high<n){
            res=max(sum,res);
            low++;
            high++;
            if(high==n)break;
            sum=sum-nums[low-1];
            sum=sum+nums[high];
        }
        double avg=res/k;
        return avg;
    }
};