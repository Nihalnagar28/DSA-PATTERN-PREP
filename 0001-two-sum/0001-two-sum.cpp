class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>index(2);
        int n=nums.size();
        for(int i=0;i<n;i++){
            int remaining= target - nums[i];
            if(mp.count(remaining)){
                index[0]=mp[remaining];
                index[1]=i;
                return index;
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};