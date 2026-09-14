class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        int xorr = 0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            xorr = xorr ^ nums[i];
        }
        for(auto it : mp){
            if(it.second%2) return false;
        }
        return xorr == 0;
    }
};