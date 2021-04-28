class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int count = 0 ;
        
        for( int c = 0 ; c < A[0].length() ; c++ ){
            for( int r = 0 ; r < A.size()-1 ; r++ ){
                if( A[r][c] > A[r+1][c] ){
                    count++ ; break ;
                }
            }
        }
        return count;
    }
};