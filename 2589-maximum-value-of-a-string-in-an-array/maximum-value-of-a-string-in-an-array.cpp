class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int length = 0;

        for (int i = 0; i < strs.size(); i++) {
            string a = strs[i];
            bool ischar = false;

            for (char c : a) {
                if (c >= 'a' && c <= 'z') {
                    ischar = true;
                    break;
                }
            }

            if (ischar) {
                length = max(length, (int)a.size());
            } else {
                int e = stoi(a);
                length = max(length, e);
            }
        }

        return length;
    }
};