class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int slow=0;
        int count =1;
        
        for(int fast=0;fast<nums.size();fast++)
        {
            if(nums[slow]!=nums[fast])
            {
                slow++;
                swap(nums[slow],nums[fast]);
                count++;
            }
        }
        return count;

        
    }
};