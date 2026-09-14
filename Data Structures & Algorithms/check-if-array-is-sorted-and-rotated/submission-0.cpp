class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int mid = 0;
        int mini = nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]<mini){
                mid = i;
                mini = nums[i];
            }
        }
        reverse(nums.begin()+mid,nums.end());
        reverse(nums.begin(),nums.begin()+mid);
        reverse(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
};