class Solution {
public:
    int findDelayedArrivalTime(int at, int dt) {
        int a = at+ dt;
        return a%24;
    }
};