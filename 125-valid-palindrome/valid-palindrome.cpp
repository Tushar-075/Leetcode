class Solution {
public:
    bool isPalindrome(string s) {
        string n = "";

        for (char c : s) {
            if (isalnum(c)) {
                n += tolower(c);
            }
        }

        string b = n;
        reverse(b.begin(), b.end());

        return n == b;
    }
};