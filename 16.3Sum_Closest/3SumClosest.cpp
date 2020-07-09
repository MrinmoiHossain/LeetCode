class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int diff = INT_MAX;
        int n = nums.size();
        
        for(int i = 0; i < n && diff != 0; ++i){
            
            int j = i + 1, k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                
                if(abs(target - sum) < abs(diff)){
                    diff = target - sum;
                    cout << nums[i] << " " << nums[j] << " " << nums[k] << endl;
                }
                    
                
                if(sum < target)
                    j++;
                else
                    k--;
            }
        }
        
        return target - diff;
    }
};