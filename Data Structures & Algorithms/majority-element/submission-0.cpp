class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele;
        int count =  0,maxi = 0;
        for(int i=0;i<n;i++){
            if(count == 0){
                ele = nums[i];
                count = 1;
                maxi = max(maxi, count);
            }else if(ele == nums[i]){
                count++;
                maxi = max(maxi, count);
            }else{
                count--;
            }
        }
        count = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == ele){
                count++;
                if(count > (n/2)){
                    return ele;
                }
            }
        }
        return -1;
    }
};