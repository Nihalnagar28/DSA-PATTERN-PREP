// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int n=a.size();
        int bestend=a[0];
        int ans=a[0];
        for(int i=1;i<n;i++){
            int ch1=bestend+a[i];
            int ch2=a[i];
            bestend=min(ch1,ch2);
            ans=min(bestend,ans);
        }
        return ans;
    }
};
`