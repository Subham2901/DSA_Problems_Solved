class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        vector<int>ans;
        // formula for sum of n natural numbers= (n*(n+1))/2
        int missing_no=0;
        int duplicate_number=0;
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            sum +=nums[i];
            if(nums[i-1]==nums[i])
            {
                duplicate_number=nums[i];
                
            }
        }
        sum+=nums[0];
        int n=nums.size();
        sum=sum-duplicate_number;
        int total=(n*(n+1))/2;
        missing_no=total-sum;
        ans.push_back(duplicate_number);
        ans.push_back(missing_no);
        return ans;
           
    }
};