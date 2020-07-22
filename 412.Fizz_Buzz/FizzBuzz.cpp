class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v(n);
        
        for(int i = 0; i < n; ++i){
            if((i + 1) % 15 == 0)
                v[i] = "FizzBuzz";
            else if((i + 1) % 5 == 0)
                v[i] = "Buzz";
            else if((i + 1) % 3 == 0)
                v[i] = "Fizz";
            else
                v[i] = to_string(i+1);
        }
        
        return v;
    }
};