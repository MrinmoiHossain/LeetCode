class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int three = 0;
        for(int i = 0; i < arr.size(); ++i){
            if(arr[i] % 2 == 1){
                three++;
                
                if(three == 3){
                    return true;
                }
            }
            else{
                three = 0;
            }
        }
        
        return false;
    }
};