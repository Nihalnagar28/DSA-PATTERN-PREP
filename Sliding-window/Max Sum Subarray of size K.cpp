class Solution {
  public: 
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int low=0,high=k-1;
        
        int sum=0;
        for(int i=low;i<=high;i++){
            sum+=arr[i];
        }
        
        int res=0;
        while(high<arr.size()){
            res=max(sum,res);
            low++;
            high++;
            
            if(high==arr.size())break;
            
            sum=sum-arr[low-1];
            sum=sum+arr[high];
            
        }
        
        return res;a
    }
};