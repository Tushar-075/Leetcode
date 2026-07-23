class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        vector<int>v = candies;
        sort(v.begin(),v.end());
        int great = v.back();
        vector<bool>ans;
        for(int i = 0;i< candies.size();i++){
            if( great<=candies[i] + e){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};