class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        string res="";
        unordered_map<char,int>f;
        for(int i=0;i<n;i++){
            f[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:f){
            pq.push({i.second,i.first});
        }
            int idx=0;
        while(!pq.empty()){
            pair<int,char>p=pq.top();
            pq.pop();
            if(res.empty()||res[idx-1]!=p.second){
                res.push_back(p.second);
                p.first--;
                if(p.first>0){
                    pq.push(p);
                }
            }else{
                if(pq.empty())return "";
                pair<int,char>p1=pq.top();
                pq.pop();
                res.push_back(p1.second);
                p1.first--;
                if(p1.first>0){
                    pq.push(p1);
                }
                pq.push(p);
            }
            idx++;
        }
        return res;
    }
};