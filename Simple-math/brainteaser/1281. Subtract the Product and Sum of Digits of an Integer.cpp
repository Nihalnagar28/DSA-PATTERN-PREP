class Solution {
public:
    int subtractProductAndSum(int n) {
       int pro=1,sum=0;
       int i=1;
       while(n!=0){
        int lastdig=n%10;
        pro*=lastdig;
        sum+=lastdig;
        n=n/10;
        i++;
       }
       return pro-sum; 
    }
};