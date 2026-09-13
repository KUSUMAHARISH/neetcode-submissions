class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(m != n) return false;
        char a[256] = {0};
        char b[256] = {0};
        for(int i=0;i<n;i++){
            if(a[s[i]] != 0 && a[s[i]]!=t[i] ||b[t[i]] !=0 && b[t[i]]!=s[i]){
                return false;
            }else{
                a[s[i]] = t[i];
                b[t[i]] = s[i];
            }
        }
        return true;
    }
};