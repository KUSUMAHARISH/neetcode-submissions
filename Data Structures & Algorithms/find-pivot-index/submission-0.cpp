class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0;
        int sum = 0;
        int index = -1;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        for(int i=0;i<n;i++){
            sum -= nums[i];
            if(sum == leftSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};