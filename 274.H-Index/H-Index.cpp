class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(begin(citations), end(citations), greater<int>());
        
        int low = 0, high = citations.size();
        while(low < high){
            int mid = low + (high - low)/2;
            
            if(citations[mid] >= mid + 1)
                low = mid + 1;
            else
                high = mid;
        }
        
        return low;
    }
};