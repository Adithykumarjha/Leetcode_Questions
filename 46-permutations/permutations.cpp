class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        if(nums.size()==1){
            vector<int>single;
            single.push_back(nums[0]);
            res.push_back(single);
            return res;

        }

        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            vector<int>remaining;
            for(int j=0;j<nums.size();j++){
                if(j !=i){
                    remaining.push_back(nums[j]);
                }
            }

            vector<vector<int>>permutation=permute(remaining);
            for(vector<int>p:permutation){
                p.insert(p.begin(),n);
                res.push_back(p);
            }
        }
        return res;
    }
};