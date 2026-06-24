class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int slow=1;
        int count=0;
        if(nums.size()<=2) return nums.size();
        for(int fast=2;fast<nums.size();fast++)
        {
            if(nums[slow-1]!=nums[fast])
            {
                slow++;
                nums[slow]=nums[fast];
                
            }
        
        }
        return slow+1;
        
    }
};