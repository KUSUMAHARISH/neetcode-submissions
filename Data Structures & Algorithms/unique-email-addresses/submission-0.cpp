class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();
        int count = 0;
        map<string, int>mp;
        for(auto it : emails){
            string str = it;
            string prefix = "";
            for(int i=0;i<str.size();i++){
                if(str[i] == '.'){
                    continue;
                }else if(str[i] == '+'){
                    break;
                }else{
                    prefix += str[i];
                }
            }
            int i = str.size()-1;
            string suffix="";
            while(str[i]!='@'){
                suffix += str[i];
                i--;
            }
            reverse(suffix.begin(),suffix.end());
            prefix = prefix+suffix;
            mp[prefix]++;
        }
        return mp.size();
    }
};