class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<char>ans;
        string res;
        for(int i=0;i<n;i++){
            if(ans.empty()){
                ans.push(s[i]);
                continue;
            }
            if(ans.top()==s[i]){
                ans.pop();
                continue;
            }

            ans.push(s[i]);
        }
        while(!ans.empty()){
            res.push_back(ans.top());
            ans.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};