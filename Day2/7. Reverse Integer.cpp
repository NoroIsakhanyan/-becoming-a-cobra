class Solution {
public:
    int reverse(int x) {
        int y=0;
        
        while(x){
            if(INT_MAX/10 < y){
                return 0;
            }
            if(INT_MIN/10 > y){
                return 0;
            }
            
            y = y*10 + x%10;
            x = x/10;
        }
        return y;
    }
};