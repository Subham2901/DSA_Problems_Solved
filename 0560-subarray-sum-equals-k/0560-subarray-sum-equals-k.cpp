class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int sum=0;
        int count=0;
        mpp[sum]++;
        for(int i =0;i<n;i++)
        {
            sum=sum+nums[i];
            int x=sum-k;
            count+=mpp[x];
            mpp[sum]++;

        }
        return count;
        
    }
};