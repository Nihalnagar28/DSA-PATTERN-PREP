class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int>tempans(n);
        stack<int>st;
        tempans[n-1]=-1;
        st.push(nums2[n-1]);
        for(int i=n-2;i>=0;i--){
            while(!st.empty()&&st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                tempans[i]=-1;
                st.push(nums2[i]);
            }else{
                tempans[i]=st.top();
                st.push(nums2[i]);
            }
        }
        vector<int>finalans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    finalans.push_back(tempans[j]);
                    break;
                }
            }
        }
        return finalans;
    }
};