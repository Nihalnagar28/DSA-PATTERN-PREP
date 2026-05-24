class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size(),low=0,high=0,product=1,count=0;
        if(k<=1)return 0;
        for(high=0;high<n;high++){
            product *= nums[high];
            while(product>=k && k>1){
                product/=nums[low];
                low++;
            }
            if(product<k){
                count+=high-low+1;
            }
        }
        return count;
    }
};