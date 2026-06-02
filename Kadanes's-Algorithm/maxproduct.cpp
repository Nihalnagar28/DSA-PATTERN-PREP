class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int minend = nums[0];
        int maxend = nums[0];
        int ans = nums[0];
        for (int i = 1; i < n; i++) {
            int ch1 = nums[i];
            int ch2 = minend * nums[i];
            int ch3 = maxend * nums[i];
            int tmaxend = max(ch1, max(ch2, ch3));
            int tminend = min(ch1, min(ch2, ch3));
            maxend = tmaxend;
            minend = tminend;
            ans = max(ans, max(minend, maxend));
        }
        return ans;
    }
};