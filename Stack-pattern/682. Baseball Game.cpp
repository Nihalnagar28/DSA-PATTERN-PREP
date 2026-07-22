class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]!="+"&&operations[i]!="D"&&operations[i]!="C"){
                st.push(stoi(operations[i]));
            }else if(operations[i]=="+"){
                int score1=(st.top());
                st.pop();
                int score2=(st.top());
                st.pop();
                st.push(score2);
                st.push(score1);
                st.push(score1+score2);
            }else if(operations[i]=="D"){
                int score=st.top();
                score=score*2;
                st.push(score);
            }else{
                st.pop();
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};