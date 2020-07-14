class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hour_angle = 0.5 * (hour * 60 + minutes); // hour hand speed -> 0.5 m/s
        double minute_angle = 6 * minutes;               // minute hand speed -> 6 m/s
        double angle = abs(hour_angle - minute_angle);
        
        return min(360 - angle, angle);
    }
};