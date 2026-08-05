class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> cp = nums;
        reverse(nums.begin(), nums.end());
        for(auto i : nums){
            cp.push_back(i);
        }
        return cp;
    }
};