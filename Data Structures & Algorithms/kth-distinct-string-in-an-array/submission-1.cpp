class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        map<string,int>mp;
        for(auto it : arr){
            mp[it]++;
        }
        for(auto it : arr){
            if(mp[it] == 1){
                k--;
                if(k == 0) return it;
            }
            else{
                continue;
            }
        }
        return "";
    }
};