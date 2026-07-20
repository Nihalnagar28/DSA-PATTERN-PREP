class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<pair<char,int>>st;
        string ans;

        for(int i=0;i<n;i++){
            char c=s[i];
            if(st.empty()){
                st.push({c,1});
                continue;
            }
            if(st.top().first!=c){
                st.push({c,1});
                continue;
            }
            if(st.top().second<k-1){
                pair<char,int>newp=st.top();
                st.pop();
                st.push({newp.first,newp.second+1});
                continue;
            }
            st.pop();
        }

        while(!st.empty()){
            pair<char,int>p=st.top();
            st.pop();
            while(p.second--){
                ans.push_back(p.first);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};