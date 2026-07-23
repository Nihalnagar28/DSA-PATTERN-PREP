class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>f;
        for(int i=0;i<ransomNote.size();i++){
            f[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            f[magazine[i]]--;
        }
        for(auto it:f){
            if(it.second>0)return false;
        }
        return true;
    }
};