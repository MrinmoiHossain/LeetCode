class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for(int i = 0; i < n - 2; ++i){
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int j = i + 1, k = n - 1;
            
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                
                if(sum < 0){
                    j++;
                }
                else if(sum > 0){
                    k--;
                }
                else{
                    vector<int> temp(3);
                    temp[0] = nums[i];
                    temp[1] = nums[j];
                    temp[2] = nums[k];
                    v.push_back(temp);
                    
                    j++;
                    while(j < k && nums[j] == temp[1])
                        j++;
                    
                    k--;
                    while(j < k && nums[k] == temp[2])
                        k--;
                }
            }
        }
        
        return v;
    }
};