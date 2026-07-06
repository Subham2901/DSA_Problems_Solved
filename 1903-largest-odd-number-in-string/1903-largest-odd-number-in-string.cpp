class Solution {
public:
    string largestOddNumber(string num) 
    {
        // finding the last index which is odd;
        int last_index=num.length()-1;
        while(last_index>=0)
        {
            if(num[last_index]%2==1)
            {
                break;
            }
            last_index--;
        }
        // Edge case
        if(last_index==-1) return "";
        int i=0;
        while(i<last_index && num[i]=='0')i++;
        return num.substr(i,last_index-i+1); 
        
    }
};