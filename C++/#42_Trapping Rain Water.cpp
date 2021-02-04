class Solution {
public:
    int trap(vector<int>& height) {
        int left=0, right=height.size()-1, maxLeft=0, maxRight=0, sum=0;
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>maxLeft) maxLeft=height[left];
                else sum+=maxLeft-height[left];
                left++;
            }
            else{
                if(height[right]>maxRight) maxRight=height[right];
                else sum+=maxRight-height[right];
                right--;
            }
        }
        return sum;
    }
};