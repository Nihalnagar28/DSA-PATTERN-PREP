class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        vector<int>nom;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                nom.push_back(matrix[i][j]);
            }
        }
        sort(nom.begin(),nom.end());
        return nom[k-1];
    }
};