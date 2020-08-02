class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0, i = 0, j = height.size() - 1;
        
        while(i < j){
            max_area = max(max_area, min(height[i], height[j]) * (j - i));
            
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        
        return max_area;
    }
};