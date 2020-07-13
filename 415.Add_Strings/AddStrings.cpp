class Solution {
public:
    string addStrings(string num1, string num2) {
        string sum = "";
        int n1 = num1.length() - 1, n2 = num2.length() - 1;
        int carry = 0;
        
        while(n1 >= 0 || n2 >= 0){
            int x = n1 >= 0? (num1[n1] - '0') : 0;
            int y = n2 >= 0? (num2[n2] - '0') : 0;
            int s = x + y + carry;
            carry = s / 10;
            
            sum += ((s % 10) + '0');
            n1--;
            n2--;
        }
        if(carry > 0){
            sum += (carry + '0');
        }
        reverse(begin(sum), end(sum));
        
        return sum;
    }
};