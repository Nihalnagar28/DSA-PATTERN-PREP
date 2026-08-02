class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int low=0,high=n-1;
        int res=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
           if(arr[mid]>=x){
                res=min(res,mid);
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        if(res==INT_MAX)return -1;
        return res;
    }
};