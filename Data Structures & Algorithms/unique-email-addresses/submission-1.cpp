class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();
        int count = 0;
        map<string, int>mp;
        for(auto it : emails){
            string str = it;
            string suffix = "";
            string prefix = "";
            int pos = str.find('@');
            suffix += str.substr(pos);
            for(int i=0;i<n;i++){
                if(str[i] == '.'){
                    continue;
                }else if(str[i] == '+' || str[i] == '@'){
                    break;
                }else{
                    prefix += str[i];
                }
            }
            mp[prefix+"@"+suffix]++;
        }
        return mp.size();
    }
};