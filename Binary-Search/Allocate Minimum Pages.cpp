class Solution {
  public:
  bool helper(vector<int>&arr,int n,int k,long long guess){
      int stu=1;
      long long pages=0;
      for(int i=0;i<n;i++){
          if(pages+arr[i]<=guess){
              pages+=arr[i];
          }else{
              stu++;
              pages=arr[i];
              if(stu>k)return false;
          }
      }
      return true;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(n<k)return -1;
        long long low=INT_MIN,high=0;
        for(int i=0;i<n;i++){
            low=max(low,(long long)arr[i]);
            high+=arr[i];
        }
        long long res=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            bool help=helper(arr,n,k,mid);
            if(!help){
                low=mid+1;
            }else{
                res=mid;
                high=mid-1;
            }
        }
        return res;
    }
};