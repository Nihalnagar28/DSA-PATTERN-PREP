class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        // code here
        int count=0;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            int left=i+1,right=n-1;
            while(left<right){
                
            int total=arr[i]+arr[left]+arr[right];
            if(total<sum){  
                count+=(right-left);
                left++;
            }else{
                right--;
            }
            }
        }
        return count;
    }
};