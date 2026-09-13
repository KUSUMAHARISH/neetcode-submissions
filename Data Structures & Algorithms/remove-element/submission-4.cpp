class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n =nums.size();
        int index = 0;
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                index = i;
                break;
            }
        }
        if(index == 0 && nums[index]!=val) return n;
        for(int i=index+1;i<n;i++){
            if(nums[i]!=nums[index]){
                swap(nums[i],nums[index]);
                index++;
            }
        }
        return index;
    }
};