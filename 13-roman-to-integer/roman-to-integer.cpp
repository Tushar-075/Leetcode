class Solution {
public:
    int romanToInt(string s) {
        vector<int> v;
        for(auto i : s){
            if(i == 'I'){
                v.push_back( 1);
            }
            else if(i == 'V'){
                v.push_back( 5);
            }
            else if(i == 'X'){
                v.push_back( 10);
            }
            else if(i == 'L'){
                v.push_back( 50);
            }
            else if(i == 'C'){
                v.push_back( 100);
            }
            else if(i == 'D'){
                v.push_back( 500);
            }
            else if(i == 'M'){
                v.push_back( 1000);
            }
            else{
                v.push_back( 0);
            }
        }
        int sum = 0;
        for(int i = 0;i<v.size()-1;i++){
            if(v[i+1]> v[i]){
                sum -= v[i];
            }
            else{
                sum+= v[i];

            }
        }
        sum += v[v.size()-1];
        return sum;
    }
};