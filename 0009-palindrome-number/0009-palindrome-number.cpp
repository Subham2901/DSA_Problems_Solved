class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
        {
            return false;
        }
        long long temp=x;
        long long num=x%10;
        x=x/10;
        
        while(x!=0)
        {
            num=(num*10)+(x%10);
            x=x/10;
        }
        // cout<<num;
        // cout<<temp;
        
        if(num==temp) return true;
        return false;  
    }
};