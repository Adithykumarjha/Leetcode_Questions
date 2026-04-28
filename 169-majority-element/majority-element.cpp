class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int>countMap;
        for(int num:nums){
            countMap[num]++;
            if(countMap[num]>n/2){
                 return num;
            }
        }
        return -1;
    }    
    
};