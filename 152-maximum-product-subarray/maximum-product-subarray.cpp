class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxpr=nums[0];
        int minpr=nums[0];
        int res=nums[0];

        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(maxpr,minpr);
            }

            maxpr=max(nums[i],maxpr*nums[i]);
            minpr=min(nums[i],minpr*nums[i]);

            res=max(res,maxpr);
           
        }

        return res;
        
    }
};