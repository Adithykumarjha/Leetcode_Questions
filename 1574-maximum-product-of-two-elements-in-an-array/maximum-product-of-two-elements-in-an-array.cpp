class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int res;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                res = max( res, (( nums[i]-1)*(nums[j]-1)));
               
            }
        }
        return res;
    }
};