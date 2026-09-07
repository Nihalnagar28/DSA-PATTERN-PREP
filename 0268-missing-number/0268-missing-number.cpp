class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]!=0){
            return 0;
        }
        int n=nums.size();
        int missing=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                missing=i;
                break;
            }else{
                missing=i+1;
            }
        }
        return missing;
    }
};