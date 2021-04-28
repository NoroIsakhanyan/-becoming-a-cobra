// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int start = 0;
        int end = n;
        
        while(start < end)
        {
            int mid = start + (end - start)/2;
            
            if(isBadVersion(mid) == false && isBadVersion(mid+1) == true){
                return mid+1;
            }else if(isBadVersion(mid) == false){
                start = mid+1;
            }else{
                end = mid;
            }
        }
        
        return start;
    }
};