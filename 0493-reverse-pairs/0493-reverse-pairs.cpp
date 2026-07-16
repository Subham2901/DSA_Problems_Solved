class Solution {
public:
    int reversePairs(vector<int>& nums) 
    {   
        return mergeSort(nums,0,nums.size()-1);
        
    }
private:
    int countPairs(vector<int>&arr, int low, int mid, int high)
    {
        int right=mid+1;
        int cnt=0;
        for(int i=low;i<=mid;i++)
        {
            while(right<=high && (long long)arr[i]>2LL*arr[right])
            {
                right++;
            }
            cnt+=(right-(mid+1));
        }
        return cnt;

    }
    void merge(vector<int>&arr, int low, int mid , int high)
    {
        int left=low;
        int right=mid+1;
        vector<int>temp;
        while(left<=mid && right<=high)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(arr[right]);
            right++;
        }

        // now shifting the sorted array from the temp array to the original array.
        for(int i=low;i<=high;i++)
        {
            arr[i]=temp[i-low];
        }
    }
    int mergeSort(vector<int>&arr, int low, int high)
    {
        int cnt=0;
        if(low>=high) return cnt;
        int mid=low+(high-low)/2;
        // left half sorting and counting
        cnt+=mergeSort(arr,low,mid);
        // Right half sorting and counting.
        cnt+=mergeSort(arr,mid+1,high);
        // Current sorting and counting.
        cnt+=countPairs(arr,low,mid,high);
        merge(arr,low,mid,high);
        return cnt;

    }
};