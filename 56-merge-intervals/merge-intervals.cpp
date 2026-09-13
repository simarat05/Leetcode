class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> result;
        int i = 0;
        sort(intervals.begin(), intervals.end());
        
        while(i < n)
        {
            int start = intervals[i][0];
            int end = intervals[i][1];

            // overlap
            while(i<n-1 && end >= intervals[i+1][0])
            {
                end = max(intervals[i+1][1], end);
                i++;
            }
            result.push_back({start, end});

            i++;
        }
        return result;
    }
};