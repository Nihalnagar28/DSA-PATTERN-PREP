class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int count=0;
        unordered_map<int,int>f;
        f[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(f.find(sum-k)!=f.end()){
                count+=f[sum-k];
            }
            f[sum]++;

        }
        return count;
    }
};