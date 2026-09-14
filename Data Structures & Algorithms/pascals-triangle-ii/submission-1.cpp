class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex++;
        long long ans = 1;
        vector<int>res;
        res.push_back(ans);
        for(int i=1;i<rowIndex;i++){
            ans = ans*(rowIndex-i);
            ans = ans/(i);
            res.push_back((int)ans);
        }
        return res;
    }
};