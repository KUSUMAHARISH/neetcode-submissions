class Solution {
public:
    int maxDifference(string s) {
        int n = s.size();
        int ans = INT_MIN;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int oddmaxi = -1e9, evenmaxi = -1e9;
        int evenmini = 1e9, oddmini = 1e9;
        for(auto it : mp){
            if(it.second % 2==1){
                oddmaxi = max(oddmaxi, it.second); 
               // oddmini = min(oddmini, it.second);
            }else{
                evenmini = min(evenmini, it.second);
               // evenmaxi = max(evenmaxi, it.second);
            }
        }
        ans = max(ans,(oddmaxi-evenmini));
        return (ans);
    }
};