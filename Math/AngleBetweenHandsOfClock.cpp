/*
Problem: Angle Between Hands of a Clock
Platform: LeetCode
Difficulty: Medium
Link: https://leetcode.com/problems/angle-between-hands-of-a-clock/

Approach:
1. Hour hand moves 30 degrees per hour and 0.5 degrees per minute.
2. Minute hand moves 6 degrees per minute.
3. Find the absolute difference between the two angles.
4. Return the smaller angle.

Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle = abs((30 * hour) - (5.5 * minutes));
        double minu = abs(angle - 360);

        if (minu > angle)
            return angle;
        else
            return minu;
    }
};
