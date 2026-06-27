class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int start=0;
        int end=n-1;

        int leftmax=0;
        int rightmax=0;
        int totalWater=0;

        while(start<end){

            leftmax=max(leftmax,height[start]);
            rightmax=max(rightmax,height[end]);

            if(leftmax<rightmax){
                totalWater += leftmax-height[start];
                start++;
            }else{
                totalWater += rightmax-height[end];
                end--;
            }
        }
        return totalWater;
    }
};