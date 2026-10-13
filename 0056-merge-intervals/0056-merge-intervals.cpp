class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int prevstart=intervals[0][0];
        int prevend=intervals[0][1];
        vector<vector<int>>ans;
        for(int i=1;i<n;i++){
            int currstart=intervals[i][0];
            int currend=intervals[i][1];
            if(prevend>=currstart){
                prevstart=prevstart;
                prevend=max(prevend,currend);
                continue;
            }
            ans.push_back({prevstart,prevend});
            prevstart=currstart;
            prevend=currend;
        }
        ans.push_back({prevstart,prevend});
        return ans;
    }
};