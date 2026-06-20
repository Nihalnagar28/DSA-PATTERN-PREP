class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        stack<char>rev;
        vector<char>ans;
        for(int i=0;i<n;i++){
            rev.push(s[i]);
        }
        for(int i=0;i<n;i++){
            ans.push_back(rev.top());
            rev.pop();
        }
        s=ans;
    }
};