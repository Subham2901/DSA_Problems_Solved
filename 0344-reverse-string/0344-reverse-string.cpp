class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        // Two pointer approach
        int temp;
        int right=s.size()-1;
        int left=0;
        while(left<right)
        {
            swap(s[right],s[left]);
            right--;
            left++;
            
        }

        
    }
};