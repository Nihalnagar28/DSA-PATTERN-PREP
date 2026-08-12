class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();//row
        int n=matrix[0].size();//col
        int row=m-1;
        int col=0;
        while(row>=0 && col<n){
            int guess=matrix[row][col];
            if(guess==target){
                return true;
            }if(guess<target){
                col++;
            }else{
                row--;
            }
        }
        return false;
    }
};