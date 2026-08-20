class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int maxdiff = INT_MAX;
        sort(nums.begin(), nums.end());
        int ressum = 0;
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;
            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target)
                    return target;
                int diff = abs(sum - target);
                if (maxdiff > diff) {
                    maxdiff = diff;
                    ressum = sum;
                }
                if (sum < target)
                    left++;
                if (sum > target)
                    right--;
            }
        }
        return ressum;
    }
};