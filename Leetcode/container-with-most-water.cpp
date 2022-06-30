class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1 = 0;
        int p2 = height.size() - 1;
        int area = 0;
        while(p1 < p2){
            int m_height = height[p1] > height[p2] ? height[p2] : height[p1];
            int width = p2 - p1;
            int current_area = m_height * width;
            if (current_area > area){
                area = current_area;
            }
            if(height[p1] > height[p2]){
                p2--;
            }else if (height[p1] < height[p2]){
                p1++;
            }else{
                p2--;
                p1++;
            }
                
        }
        return area;
        
    }
};