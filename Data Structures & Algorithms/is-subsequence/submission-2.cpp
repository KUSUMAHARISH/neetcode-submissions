class Solution {
public:
bool helper(int i,int j, string s1, string s2,vector<vector<int>>&dp){
    if(i == 0 && j == 0) return true;
    if(i == 0 && j >= 0) return true;
    if(i > 0 && j == 0) return false;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i-1] == s2[j-1]){
        return dp[i][j] = helper(i-1,j-1,s1,s2,dp);
    }
    return dp[i][j] = helper(i,j-1,s1,s2,dp);
}
    bool isSubsequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return helper(n,m,s1,s2,dp);
    }
};