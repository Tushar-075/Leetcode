class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        for(auto i : s){
            if(i == 'a' || i == 'e' || i== 'i' || i == 'o'|| i == 'u'||i == 'A' || i == 'E' || i== 'I' || i == 'O'|| i == 'U'){
                v.push_back(i);
            }
        }
        string n;
        reverse(v.begin(), v.end());
        int count = 0;
        for(auto i : s){
            if(i == 'a' || i == 'e' || i== 'i' || i == 'o'|| i == 'u'||i == 'A' || i == 'E' || i== 'I' || i == 'O'|| i == 'U'){
                n+= v[count];
                count++;
            }else{
                n+=i;
            }
        }
        return n;
    }
};