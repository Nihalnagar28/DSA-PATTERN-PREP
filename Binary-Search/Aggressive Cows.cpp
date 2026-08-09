class Solution {
  public:
  bool moww(vector<int>&arr,int k,int n,int guess){
      int cows=1;
      int prevpos=arr[0];
      for(int i=0;i<n;i++){
          int dist=arr[i]-prevpos;
          if(dist<guess){
              continue;
          }
          cows++;
          prevpos=arr[i];
      }
      if(cows>=k){
          return true;
      }
      return false;
  }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int low=1,high=arr[n-1]-arr[0];
        int res=0;
        while(low<=high){
            int guess=low+(high-low)/2;
            int ans=moww(arr,k,n,guess);
            if(!ans){
                high=guess-1;
            }else{
                res=guess;
                low=guess+1;
            }
        }
        return res;
    }
};