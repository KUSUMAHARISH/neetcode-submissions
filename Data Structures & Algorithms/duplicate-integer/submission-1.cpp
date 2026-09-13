class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto it : mp){
            if(it.second > 1){
                return true;
            }
        }
        return false;
    }
};