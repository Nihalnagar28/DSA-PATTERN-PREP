class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=0;
        while(high<n){
           if(nums[high]!=0){
            swap(nums[low],nums[high]);
            low++;
           }
           high++;
        }
    }
};