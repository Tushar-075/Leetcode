class Solution {
public:
    vector<int> plusOne(vector<int>& v) {

        int l = v.size() - 1;

        v[l]++;

        while (l >= 0 && v[l] == 10) {

            v[l] = 0;

            if (l == 0) {
                v.insert(v.begin(), 1);
                break;
            }

            v[l - 1]++;
            l--;
        }

        return v;
    }
};