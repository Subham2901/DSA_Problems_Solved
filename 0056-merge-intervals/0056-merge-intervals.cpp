class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>>merged;
        // sort the intervals such that it appears in a sorted manner 
        sort(intervals.begin(),intervals.end());
        // Now we will traverse and chekc and merge
        for(auto interval:intervals)
        {
            if(merged.empty() || merged.back()[1]<interval[0])
            {
                merged.push_back(interval);
            }
            else
            {
                merged.back()[1]=max(merged.back()[1],interval[1]);
            }
        }
        return merged;

        
    }
};