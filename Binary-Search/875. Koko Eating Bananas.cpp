class Solution {
public:
    long long hours(vector<int>&piles,int n,int guess){
        long long taken=0;
        for(int i=0;i<n;i++){
            taken=taken+piles[i]/guess;
            if(piles[i]%guess!=0){
                taken++;
            }
        }
        return taken;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int res=-1;
        int low=1,high=INT_MIN;
        for(int i=0;i<n;i++){
            high=max(high,piles[i]);
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hour=hours(piles,n,mid);
            if(hour>h){
                low=mid+1;
            }else{
                res=mid;
                high=mid-1;
            }
        }
        return res;
    }
};