class Solution {
public:
    int maxArea(vector<int>& height) {
        
      int maxArea=0;
       
      long long l = 0 , r = height.size()-1;
            
        while (l< r){
           int  newArea = min(height[l], height[r]) * (r-l);
            
            if (newArea > maxArea){
                maxArea = newArea;
            }
            if (height [l] >  height[r]){
                r--;
            }
            else {
                l++;
            }
        }

        return maxArea;
        
    }
    

};
