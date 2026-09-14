class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.size();
        map<char,int>mp;
        for(auto it : text){
            mp[it]++;
        }
        int ans = INT_MAX;
        for(auto it : mp){
           ans = min({ans,mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});
        }
        return ans;
    }
};