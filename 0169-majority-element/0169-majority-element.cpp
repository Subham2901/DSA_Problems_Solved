class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        // Moore's Voting Algorithm
        int ele=INT_MIN;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                cnt=1;
                ele=nums[i];
            }
            else if(ele==nums[i])
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        cnt=0;
        for(int i=0;i<n;i++)
        {
            if(ele==nums[i])
            {
                cnt++;
            }
        }
        int min_req=int(n/2)+1;
        if(cnt>=min_req)
        {
            return ele;
        }
        return -1;
        
    }
};