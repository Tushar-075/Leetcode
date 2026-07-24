class Solution {
public:
    int scoreOfString(string s) {
        int i =0;
        int score =0;
        while(i<s.size()-1){
            int s1 = (int)s[i];
            int s2 = (int)s[i+1];
            int a = s1-s2;
            if(a<0){score+= -1*a;}
            else{score+= a;}
            i++;
        }
        return score;
    }
};