class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int totalVal=0;
        for(int num:nums){
            totalVal +=num;
        }
        int target = totalVal-x;
        if(target<0) return -1;
        if(target==0) return n;

        int left=0;
        int sum=0;
        int maxLen=-1;

        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>target && left<=right){
                sum-=nums[left];
                left++;
            }
            if(sum==target) maxLen=max(maxLen,right-left+1);
        }

        return maxLen==-1 ? -1:n-maxLen;



    }
};