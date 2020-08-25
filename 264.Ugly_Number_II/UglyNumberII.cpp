class Solution {
public:
    int nthUglyNumber(int n) {
        int ugly[n];
        
        ugly[0] = 1;
        int current = 1;
        int a = 2, b = 3, c = 5;
        int i = 0, j = 0, k = 0;
        
        for(int x = 1; x < n; ++x){
            current = min(a, min(b, c));
            ugly[x] = current;
            
            if(current == a){
                i++;
                a = 2 * ugly[i];
            }
            if(current == b){
                j++;
                b = 3 * ugly[j];
            }
            if(current == c){
                k++;
                c = 5 * ugly[k];
            }
        }
        
        return current;
    }
};