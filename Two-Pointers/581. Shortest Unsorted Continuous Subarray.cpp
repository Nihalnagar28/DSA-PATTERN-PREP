581. Shortest Unsorted Continuous Subarray
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        if(is_sorted(nums.begin(),nums.end())){
            return 0;
        }
        int low=0,high=n-1;
        while(low<n-1&&nums[low+1]>=nums[low])low++;
        while(high>0&&nums[high-1]<=nums[high])high--;
    int mini=INT_MAX,maxi=INT_MIN;
        for(int i=low;i<=high;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }

        while(low>0&&nums[low-1]>mini)low--;
        while(high<n-1&&nums[high+1]<maxi)high++;
        return high-low+1;
    }
};