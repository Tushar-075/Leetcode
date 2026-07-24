class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int counter = 0;
        for(int i = 0;i<nums[nums.size()-1];i++){
            if(counter != nums[i]){
                return counter;
            }
            counter++;
        }
        return counter+1;
    }
};