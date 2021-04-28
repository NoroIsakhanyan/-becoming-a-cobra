class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int even=0, odd=1;
        while(even < A.size())
        {
            if(A[even]%2)
            {
                while(true)
                {
                    if(!(A[odd]%2)) break;
                    odd+=2;
                }
                swap(A[even],A[odd]);
            }
            even+=2;
        }
        return A;
    }
};