class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int g =0;
        for(int i = 0;i<accounts.size();i++){
            vector<int> v = accounts[i];
            int sum = 0;
            for(int j =0 ;j<v.size() ;j++){
                sum += v[j];
            }
            if(sum> g) g = sum;
        }
        return g;
    }
};