class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> new1 = nums;
        sort(new1.begin(), new1.end());
        int n = new1.size();
        if(new1[n-1] >= 2*new1[n-2]){
            for(int i = 0;i<n; i++){
                if(nums[i] == new1[n-1]){
                    return i;
                }
            }
        }
        return -1;
    }
};