class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        vector<int>v;
        sort(nums.begin(),nums.end());
        while(i<j){
            v.push_back(nums[i]+nums[j]);
            i++;
            j--;
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};