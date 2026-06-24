class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        // Sum of natural numbers 
        int total = (n*(n+1))/2;
        int sum=0;
        for(auto i:nums)
        {
            sum=sum+i;
        }
        return total-sum;

        
    }
};