class Solution {
public:
vector<int>GenerateRows(int n){
    vector<int>res;
    int ans = 1;
    res.push_back(1);
    for(int i=0;i<n;i++){
        ans = ans*(n-i-1);
        ans = ans/(i+1);
        res.push_back(ans);
    }
    res.pop_back();
    return res;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            vector<int>rows = GenerateRows(i);
            ans.push_back(rows);
        }
        return ans;
    }
};