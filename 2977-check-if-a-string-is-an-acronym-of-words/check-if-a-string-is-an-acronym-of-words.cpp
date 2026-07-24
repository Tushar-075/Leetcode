class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string a="";
        for(auto i: words){
            a+=i[0];
        }
        if(a== s){return true;}
        else{return false;}
    }
};