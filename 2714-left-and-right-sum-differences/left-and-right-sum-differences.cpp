class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);
        int total=0;
        int lsum=0;

        for(int num:nums){
            total+=num;
        }

        for(int i=0;i<n;i++){
            int rsum=total-lsum-nums[i];
            res[i]=abs(lsum-rsum);
            lsum+=nums[i];
        }

        return res;
        
    }
};