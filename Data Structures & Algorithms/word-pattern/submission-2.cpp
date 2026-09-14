class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.size();
        map<char,string>mp;
        map<string,char>rev;
        stringstream ss(s);
        string word;
        int i = 0;
        while(i<n && ss >> word){
            if(mp.find(pattern[i])==mp.end()){
                mp[pattern[i]] = word;
            }else{
                if(mp[pattern[i]]!=word){
                    return false;
                }
            }
            if(rev.find(word)==rev.end()){
                rev[word] = pattern[i];
            }else{
                if(rev[word]!=pattern[i]){
                    return false;
                }
            }
            i++;
        }
        if(i!=n || ss>>word) return false;
        return true;
    }
};