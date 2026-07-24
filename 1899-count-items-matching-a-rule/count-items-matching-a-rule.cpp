class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        for(int i = 0;i< items.size();i++){
            vector<string> v= items[i];
            if(ruleKey =="type"){
                if(v[0]== ruleValue){
                    count++;
                }
            }
            else if(ruleKey =="color"){
                if(v[1]== ruleValue){
                    count++;
                }
            }else{
                if(v[2]== ruleValue){
                    count++;
                }
            }
        }
        return count;
    }
};