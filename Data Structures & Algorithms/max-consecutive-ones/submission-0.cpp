class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0,maxi = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                maxi++;
                ans = max(ans,maxi);
            }else{
                maxi = 0;
            }
        }
        return ans;
    }
};