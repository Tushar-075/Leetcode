class Solution {
public:
    int countDigits(int num) {
        int x = num;
        int c = 0;
        while(x>0){
            int rem = x%10;
            if(num%rem == 0){
                c++;
            }
            x = x/10;
        }
        return c;
    }
};