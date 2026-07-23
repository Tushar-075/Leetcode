class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;

        int i = 1;
        int ans = 0;

        while(i <= x){
            long long n = 1LL * i * i;

            if(n < x){
                ans = i;
                i++;
            }
            else if(n > x){
                break;
            }
            else{
                return i;
            }
        }
        return ans;
    }
};