class Solution {
public:
    int myAtoi(string str) {
        istringstream ss(str);
        long long temp = 0;
        ss >> temp;
        
        int ans = 0;
        if(temp < INT_MIN)
            ans = INT_MIN;
        else if(temp > INT_MAX)
            ans = INT_MAX;
        else
            ans = temp;
        
        return ans;
    }
};