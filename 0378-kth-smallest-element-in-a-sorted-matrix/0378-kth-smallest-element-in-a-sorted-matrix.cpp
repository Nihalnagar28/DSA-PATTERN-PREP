class Solution {
public:
    int func(vector<vector<int>>&matrix,int n,int guess){
        int row=n-1;
        int col=0;
        int cnt=0;
        while(row>=0&&col<n){
            int rc=matrix[row][col];
            if(rc<=guess){
                cnt+=row+1;
                col++;
            }else{
                row--;
            }
        }
        return cnt;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int low=matrix[0][0],high=matrix[n-1][n-1];
        int res=0;
        while(low<=high){
            int guess=low+(high-low)/2;
            int fun=func(matrix,n,guess);
            if(fun<k){
                low=guess+1;
            }else{
                res=guess;
                high=guess-1;
            }
        }
        return res;
    }
};