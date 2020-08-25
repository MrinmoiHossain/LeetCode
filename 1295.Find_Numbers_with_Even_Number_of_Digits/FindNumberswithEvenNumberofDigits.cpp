class Solution {
public:
    int findNumbers(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        int count = 0;
        
        for(int num : nums){
            int digit = 0;
            while(num > 0){
                num /= 10;
                digit++;
            }
            
            if(digit % 2 == 0)
                count++;
        }
        
        return count;
    }
};