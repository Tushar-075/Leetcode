class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f =-1;
        int l =-1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==target && f==-1){
                f+= i+1;
            }
            if(nums[i]== target && l<i){
                l = i;
            }
        }
        vector<int> v = {f, l};
        return v;
    }
};