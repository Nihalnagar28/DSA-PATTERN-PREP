// 977. Squares of a Sorted Array using extra arrays

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]*nums[i]);
            }else{
                neg.push_back(nums[i]*nums[i]);
            }
        }
        reverse(neg.begin(),neg.end());
        int i=0,j=0,idx=0;
        while(i<neg.size()&&j<pos.size()){
            if(neg[i]<pos[j]){
                nums[idx]=neg[i];
                i++;
                idx++;
            }else{
                nums[idx]=pos[j];
                j++;
                idx++;
            }
        }
        while(i<neg.size()){
            nums[idx]=neg[i];
            i++;
            idx++;
        }
        while(j<pos.size()){
            nums[idx]=pos[j];
            j++;
            idx++;
        }
        return nums;
    }
}; 