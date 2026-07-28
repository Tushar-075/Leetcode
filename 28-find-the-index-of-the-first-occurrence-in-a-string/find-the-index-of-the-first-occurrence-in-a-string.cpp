class Solution {
public:
    int strStr(string h, string n) {
        if (n.empty()) return 0;
        if (n.size() > h.size()) return -1;

        int i = 0;
        int size = h.size();

        while (i + n.size() <= h.size()) {
            if (h[i] == n[0]) {
                int j = 0;
                int k = i;
                int count = 0;

                while (j < n.size()) {
                    if (h[k] == n[j]) {
                        count++;
                    } else {
                        break;
                    }
                    k++;
                    j++;
                }

                if (count == n.size()) {
                    return i;
                }
            }
            i++;
        }

        return -1;
    }
};