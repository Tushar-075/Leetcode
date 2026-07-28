class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v(nums.size(), 0);
        int k = 0;
        int j = nums.size()-1;
        for(auto i : nums){
            if(i%2 == 0){
                v[k] = i;
                k++;
            }else{
                v[j] = i;
                j--;
            }
        }
        return v;
    }
};