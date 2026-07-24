class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (auto i : nums) {
            int c = 0;

            if (i == 0)
                c = 1;

            while (i > 0) {
                i /= 10;
                c++;
            }

            if (c % 2 == 0)
                count++;
        }

        return count;
    }
};