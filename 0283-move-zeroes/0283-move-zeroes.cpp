class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int slow = 0;  // next slot for a non-zero element
    for (int fast = 0; fast < nums.size(); fast++) {
        if (nums[fast] != 0) {
            swap(nums[slow], nums[fast]);
            slow++;
        }
    }
        
        
    }
};