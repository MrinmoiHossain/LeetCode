class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int n = A.size() - 1;
        
        while(n >= 0 || K > 0){
            if(n >= 0){
                K += A[n];
                A[n] = K % 10;
                n--;
            }
            else{
                A.insert(A.begin(), K % 10);
            }
            
            K /= 10;
        }
        
        return A;
    }
};