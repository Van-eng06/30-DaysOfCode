class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int v=0;
        sort(intervals.begin(),intervals.end());
        int a=intervals[0][0];
        int b=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(a==intervals[i][0] && b<= intervals[i][1])
            {
                v++;
                a=intervals[i][0];
                b=intervals[i][1];
            }
            else if(a<intervals[i][0] && b>=intervals[i][1])
            {
                v++;
            }
            else
            {
                a=intervals[i][0];
                b=intervals[i][1];
            }
        }
     
        return intervals.size()-v;
    }
};
