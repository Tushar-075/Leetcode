class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int n =0;
        for(auto i : o){
            if(i == "--X"|| i == "X--"){
                n--;
            }else{
                n++;
            }
        }
        return n;
    }
};