class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>left = nums;
        vector<int>right = nums;
        int lefty = 0;
        for(int i = 0;i<n;i++){
            left[i]= lefty;
            lefty+= nums[i];
        }
        int righty = 0;
        int j = n-1;
        for(int i = 0;i<n;i++){
            right[i] = righty;
            righty+= nums[j];
            j--;
        }
        reverse(right.begin(), right.end());
        vector<int> ans = nums;
        for(int i = 0;i<n;i++){
            int a = left[i] - right[i];
            if(a<0){
                ans[i] = -1*(a);
            }else{
                ans[i] = a;
            }
        }
        return ans;
    }
};