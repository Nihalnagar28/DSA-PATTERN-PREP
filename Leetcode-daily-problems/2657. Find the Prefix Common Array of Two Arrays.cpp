class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        unordered_map<int,int>f;
        vector<int>prefix;
        int count=0;
        for(int i=0;i<n;i++){
            f[A[i]]++;
            if(f[A[i]]==2){
                count++;
            }

            f[B[i]]++;
            if(f[B[i]]==2)count++;

            prefix.push_back(count);
        }

        return prefix;
    }
};