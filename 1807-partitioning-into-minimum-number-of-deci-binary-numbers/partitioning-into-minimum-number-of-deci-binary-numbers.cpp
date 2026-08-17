class Solution {
public:
    int minPartitions(string n) {
        int max = 0;

        for(char c : n) {
            int digit = c - '0';
            if(digit > max)
                max = digit;
        }

        return max;
    }
};