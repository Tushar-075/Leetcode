class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> res;
        for(auto i: matrix){
            int sum =0;
            for(auto j: i){
                sum+= j;
            }
            res.push_back(sum);
        }
        return res;
    }
};