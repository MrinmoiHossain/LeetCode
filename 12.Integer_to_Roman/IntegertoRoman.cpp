class Solution {
public:
    string intToRoman(int num){
        string s = "";
        string list[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int   value[] = {1000, 900, 500,  400, 100,   90,  50,  40,   10,   9,    5,   4,   1};

        int i = 0;
        while(num){
            while(value[i] <= num){
                num -= value[i];
                s += list[i];
            }
            ++i;
        }

        return s;
    }
};
