// 75. Sort Colors dutch national flag optimal aproach using 3 variables insted of pointers/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int zero=0,one=0,two=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }else if(nums[i]==1){
                one++;
            }else{
                two++;
            }
        }
        int i=0;
        for(int j=0;j<zero;j++){
            nums[i++]=0;
        }
        for(int j=0;j<one;j++){
            nums[i++]=1;
        }
        for(int j=0;j<two;j++){
            nums[i++]=2;
        }
    }
};