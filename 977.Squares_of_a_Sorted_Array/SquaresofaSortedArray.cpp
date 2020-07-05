class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int n = A.size();
        int j = 0;
        
        while(j < n && A[j] < 0)
            j++;
        
        int i = j - 1;
        vector<int> sq_A;
        
        while(i >= 0 && j < n){
            if(A[i] * A[i] < A[j] * A[j]){
                sq_A.push_back(A[i] * A[i]);
                i--;
            }
            else{
                sq_A.push_back(A[j] * A[j]);
                j++;
            }
        }
        
        while(i >= 0){
            sq_A.push_back(A[i] * A[i]);
            i--;
        }
        
        while(j < n){
            sq_A.push_back(A[j] * A[j]);
            j++;
        }
        
        return sq_A;
    }
};