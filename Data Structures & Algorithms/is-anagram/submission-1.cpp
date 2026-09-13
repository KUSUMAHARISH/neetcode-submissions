class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n != m) return false;
        map<char,int>mp;
        for(auto it : s){
            mp[it]++;
        }
        for(auto it : t){
            mp[it]--;
        }
        for(auto it : mp){
            if(it.second > 0){
                return false;
            }
        }
        return true;
    }
};
