class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missing=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return nums.size();
    }
};//brute force


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int nsum=n*(n+1)/2;
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        return nsum-sum;
    }
};//optiaml