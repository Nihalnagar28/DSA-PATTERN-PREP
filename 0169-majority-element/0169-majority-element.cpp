class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>f;
        int n=nums.size();
        for(int i=0;i<n;i++){
            f[nums[i]]++;
        }
        int majority=0;
        for(auto i:f){
            if(i.second>n/2){
                majority=i.first;
                break;
            }
        }
        return majority;
    }
};