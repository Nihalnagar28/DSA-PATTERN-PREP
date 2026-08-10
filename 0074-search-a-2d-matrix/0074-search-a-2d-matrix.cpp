class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0,high=(m*n)-1;

        while(low<=high){
            int guess=low+(high-low)/2;
            int row=guess/n;
            int cols=guess%n;
            if(matrix[row][cols]==target){
                return true;
            }else if(matrix[row][cols]<target){
                low=guess+1;
            }else{
                high=guess-1;
            }
        }
        return false;
    }
};