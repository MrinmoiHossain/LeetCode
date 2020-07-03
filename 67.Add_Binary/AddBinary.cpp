class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length() < b.length())
            swap(a, b);
        
        int alen = a.length(), blen = b.length();
        string s = "";
        for(int i = 0; i < alen - blen; i++){
            s += "0";
        }
        b = s + b;
        
        string sum = "";
        int curry = 0;
        for(int i = alen - 1; i >= 0; --i){
            int csum = curry + (a[i] - '0') + (b[i] - '0');
            if(csum == 3){
                sum += '1';
                curry = 1;
            }
            else if(csum == 2){
                sum += "0";
                curry = 1;
            }
            else if(csum == 1){
                sum += '1';
                curry = 0;
            }
            else{
                sum += "0";
                curry = 0;
            }
        }
        if(curry)
            sum += '1';
        
        reverse(sum.begin(), sum.end());
        
        return sum;
    }
};