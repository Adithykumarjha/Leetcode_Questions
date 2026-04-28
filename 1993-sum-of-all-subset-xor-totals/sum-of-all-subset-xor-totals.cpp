class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int total=0;
        int n=nums.size();
        for(int num:nums){
            total |=num;
        }

        return total <<(n-1);
        
    }
};