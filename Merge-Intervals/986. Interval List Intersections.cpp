class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
     int n=firstList.size(),m=secondList.size();
     int i=0,j=0;
     vector<vector<int>>res;
     while(i<n&&j<m){
        int start1=firstList[i][0];
        int end1=firstList[i][1];
        int start2=secondList[j][0];
        int end2=secondList[j][1];
        if(start1<=start2){
            if(end1>=start2){
                int interStart=max(start1,start2);
                int interEnd=min(end1,end2);
                res.push_back({interStart,interEnd});
            }
        }else{
            if(end2>=start1){
                int interstart=max(start1,start2);
                int interEnd=min(end1,end2);
                res.push_back({interstart,interEnd});
            }
        }

        if(end1<=end2){
            i++;
        }else{
            j++;
        }
     }   
     return res;
    }
};