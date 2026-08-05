class Solution {
private:
long long total_hours(vector<int>&piles, int mid)
{
    long long sum=0;
    int n=piles.size();
    for(int i=0;i<n;i++)
    {
        sum+=ceil((double)(piles[i])/(double)(mid));
    }
    return sum;
}
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long sum=total_hours(piles,mid);
            if(sum<=h)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low; // the polarity gets changed.


        
    }
};