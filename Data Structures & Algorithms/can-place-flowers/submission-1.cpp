class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int m = arr.size();
        int maxi = 0;
        for(int i=0;i<m;i++){
            if(arr[i] == 0){
                bool emptyLeft = (i == 0 || arr[i - 1] == 0);
                bool emptyRight = (i == m - 1 || arr[i + 1] == 0);
                if(emptyLeft && emptyRight){
                    arr[i] = 1;
                    maxi++;
                }
            }
        }
        if(maxi >= n)return true;
        return false;
    }
};