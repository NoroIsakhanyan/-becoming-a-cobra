class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle == "")
        {
            return 0;   
        }
        
        
       int val = haystack.find(needle);
        if(val > haystack.length())
        {
            return -1;
        }
        return val;
        
        
        
    }
};