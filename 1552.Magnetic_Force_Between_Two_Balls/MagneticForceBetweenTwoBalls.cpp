class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        sort(begin(position), end(position));
        
        int low = 1, high = position.back();
        while(low < high){
            int mid = low + (high - low) / 2;
            
            int privot = -1e9;
            int count = 0;
            for(int v : position){
                if(v - privot >= mid + 1){
                    privot = v;
                    count++;
                }
            }
            
            if(count >= m)
                low = mid + 1;
            else
                high = mid;
        }
        
        return low;
    }
};