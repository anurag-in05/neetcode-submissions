/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        int t= -1;
        sort(intervals.begin(),intervals.end(),[](Interval &a, Interval &b) {
            return a.start < b.start;
        });
        for(int i=0;i<intervals.size();i++){
            if(intervals[i].start >= t){
                t=intervals[i].end;
            }
            else return false;
        }
        return true;
    }
};
