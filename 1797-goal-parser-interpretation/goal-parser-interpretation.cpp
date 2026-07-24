class Solution {
public:
    string interpret(string s) {
        string a;
        int i = 0;

        while (i < s.size()) {
            if (s[i] == 'G') {
                a += 'G';
                i++;
            }
            else if (s[i] == '(' && s[i + 1] == ')') {
                a += 'o';
                i += 2;
            }
            else {
                a += "al";
                i += 4;
            }
        }

        return a;
    }
};