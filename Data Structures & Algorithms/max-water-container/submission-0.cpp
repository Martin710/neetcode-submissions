class Solution {
public:
    int maxArea(vector<int>& heights) {

        int maxarea = 0;
        int area;
        int l = 0;
        int r = heights.size() - 1;

        while(l < r){
            area = min(heights[l], heights[r]) * (r - l);
            if(maxarea < area){
                maxarea = area;
            }
            if(heights[l] < heights[r]){
                ++l;
            }
            else{
                --r;
            }
        }
        return maxarea;
    }
};
