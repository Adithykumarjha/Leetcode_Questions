class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int curr=nums[i];
            int sum=0;
            while(curr>0){
                sum+=curr%10;
                curr=curr/10;
            }

            if(sum==i) return i;

        }
        return -1;
    }
};