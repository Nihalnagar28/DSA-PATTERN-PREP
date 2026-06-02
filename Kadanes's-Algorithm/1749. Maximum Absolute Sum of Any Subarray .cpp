class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxsum = nums[0];
        int minsum = nums[0];
        int res = abs(nums[0]);

        for (int i = 1; i < n; i++) {
            maxsum = max(maxsum + nums[i], nums[i]);
            minsum = min(minsum + nums[i], nums[i]);

            int absmin = abs(minsum);
            int absmax = abs(maxsum);

            res = max(res, max(absmax, absmin));
        }
        return res;
    }
};
}