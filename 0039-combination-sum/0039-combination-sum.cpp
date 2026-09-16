class Solution {
public:
    void fun(int target,int idx,vector<int>&candidates,vector<int>&diary,vector<vector<int>>&ans,int sum,int n){
        if(idx==n){
            if(sum==target){
                ans.push_back(diary);
            }
            return;
        }
        fun(target,idx+1,candidates,diary,ans,sum,n);
        if(sum+candidates[idx]<=target){
            diary.push_back(candidates[idx]);
            sum+=candidates[idx];
            fun(target,idx,candidates,diary,ans,sum,n);
            diary.pop_back();
            sum-=candidates[idx];
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        int idx=0;
        int sum=0;
        vector<int>diary;
        vector<vector<int>>ans;
        fun(target,idx,candidates,diary,ans,sum,n);

        return ans;
    }
};