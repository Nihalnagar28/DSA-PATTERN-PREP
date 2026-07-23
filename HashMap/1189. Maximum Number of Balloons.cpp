class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>have,need;
        string bal="balloon";
        for(auto ch:bal){
            need[ch]++;
        }
        for(auto ch:text){
            have[ch]++;
        }
        int mini=INT_MAX;
        for(auto it:need){
            char ch=it.first;
            mini=min(mini,have[ch]/need[ch]);
        }
        return mini;
    }
};