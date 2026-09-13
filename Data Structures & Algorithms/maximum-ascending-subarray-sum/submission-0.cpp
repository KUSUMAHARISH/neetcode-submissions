class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int ans = sum;
        int last = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>last){
                sum += nums[i];
                ans = max(ans, sum);
                last = nums[i];
            }else{
                sum = nums[i];
                last = nums[i];
            }
        }   
        return ans;
    }
};