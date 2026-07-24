class Solution {
public:
    int mostWordsFound(vector<string>& se) {
        int count = 0;
        for(int i = 0;i<se.size();i++){
            string a = se[i];
            int e =0;
            for(auto c: a){
                if(c == ' '){
                    e++;
                }
            }
            e++;
            if(e>count){
                count= e;
            }
        }
        return count;
    }
};