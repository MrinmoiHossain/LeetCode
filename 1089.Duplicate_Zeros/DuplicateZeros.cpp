class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeros = 0, n = arr.size() - 1;
        
        for(int i = 0; i <= n - zeros; ++i){
            if(arr[i] == 0){
                if(i == n - zeros){
                    arr[n] = 0;
                    n -= 1;
                    break;
                }
                zeros++;
            }
        }

        for(int i = n - zeros; i >= 0; --i){
            if(arr[i] == 0){
                arr[i + zeros] = 0;
                zeros--;
                arr[i + zeros] = 0;
            }
            else{
                arr[i + zeros] = arr[i];
            }
            
        }
    }
};