class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int con = 0, blank = 0;
        while(numBottles > 0){
            con += numBottles;
            int temp = (numBottles  + blank) / numExchange;
            blank = (numBottles  + blank) % numExchange;
            numBottles = temp;
        }
        
        
        return con;
    }
};