class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minutesdegree = 6.0 * minutes;
        double hourdegree = 30.0 * (hour % 12) + 0.5 * minutes;
        double ans = abs(minutesdegree - hourdegree);
        return min(ans,360-ans);        
    }
};