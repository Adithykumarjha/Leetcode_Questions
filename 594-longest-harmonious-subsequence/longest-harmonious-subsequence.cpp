class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> fm;

        for(int num:nums){
            fm[num]++;
        }

        int maxLength=0;

        for(auto&[num,count]:fm){
            if(fm.count(num+1)){
                int currLength=count+fm[num+1];
                maxLength = max(maxLength, currLength);
            }
        }

        return maxLength;
        
    }
};