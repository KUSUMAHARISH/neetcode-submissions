class Solution {
public:
    int heightChecker(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        vector<int>nums = arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i] != arr[i]){
                count++;
            }
        }
        return count;
    }
};