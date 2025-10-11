class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positive=0,negative=1;
        vector<int>sol(nums.size(),0);

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                sol[positive]=nums[i];
                positive+=2;
            }

            else{
                sol[negative]=nums[i];
                negative+=2;
            }
        }

        return sol;

        
    }
};