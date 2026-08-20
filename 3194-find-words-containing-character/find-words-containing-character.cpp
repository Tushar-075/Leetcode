class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        for(int i = 0; i<words.size() ;i++){
            string s = words[i];
            for(auto j : s){
                if(j == x){
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};