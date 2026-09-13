class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        //11,12
        int ans =0;
        for(auto it : details){
            string s = it;
            int age = (s[11]-'0')*10+(s[12]-'0');
            if(age > 60){
                ans++;
            }
        }
        return ans;
    }
};