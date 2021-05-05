class Solution {
public:
    int myAtoi(string s) {
         stringstream ss(s);
            long long x2=0;
            ss>>x2;
                int x = x2;
                    if(x!=x2 && x2>0){
                        return INT_MAX;
                    }
                    else if(x!=x2 && x2<0){
                          return INT_MIN;
                    }
        return x;
    }
};