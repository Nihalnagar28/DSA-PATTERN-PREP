class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n=nums.size();
       int prefix=0;
       int sufix=0;
       int sum=0;
       for(int i=0;i<n;i++){
            sum+=nums[i];
       }

       if(sum-nums[0]==0)return 0;

        for(int i=1;i<n;i++){
            prefix+=nums[i-1];
            sufix=sum-prefix-nums[i];
            if(prefix==sufix){
                return i;
            }
        }
        return -1;

    }
};