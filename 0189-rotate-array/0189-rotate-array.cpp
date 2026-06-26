class Solution {
private:
    void reversearr(vector<int> &nums, int first, int last)
    {
        while(first<last)
        {
            int temp=nums[first];
            nums[first]=nums[last];
            nums[last]=temp;
            first++;
            last--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) 
    {
        // to rotate right by k elements
        int n=nums.size();
        int modk=k%n;
        reversearr(nums,0,n-1);
        reversearr(nums,0,modk-1);
        reversearr(nums,modk,n-1);
        
    }
};