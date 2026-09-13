class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int icount = 1,dcount = 1;
        int last_element = nums[0]; 
        for(int i=1;i<n;i++){
            if(nums[i]>last_element){
                icount++;
                count = max(count, icount);
                last_element =  nums[i];
                dcount = 1;
            }else if(nums[i]<last_element){
                dcount++;
                count = max(count, dcount);
                last_element = nums[i];
                icount = 1;
            }else{
                last_element = nums[i];
                icount = 1;
                dcount = 1;
            }
        }
        return count;
    }
};