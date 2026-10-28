class Solution {
public:
    int reverseDegree(string s) {
        int sum =0;
        int c = 1;
        for(auto i : s){
            sum += c*(27- (i-96));
            c++;
        }
        return sum;
    }
};