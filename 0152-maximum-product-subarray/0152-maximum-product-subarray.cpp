class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int result    = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int n = nums[i];
        // a negative n swaps roles of max and min — capture old max before it's overwritten
            int tempMax = max({ n, maxEnding * n, minEnding * n });
            minEnding   = min({ n, maxEnding * n, minEnding * n });
            maxEnding   = tempMax;
            result = max(result, maxEnding);
    }
    return result; 
    }
};