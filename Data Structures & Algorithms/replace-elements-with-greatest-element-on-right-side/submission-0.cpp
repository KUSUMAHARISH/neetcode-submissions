class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n);
        int last_element = -1;
        for(int i=n-1;i>=0;i--){
            ans[i] = last_element;
            last_element = max(arr[i], last_element);         
        }
        //ans[0] = last_element;
        return ans;
    }
};