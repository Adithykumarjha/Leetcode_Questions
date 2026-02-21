class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxcnt=0;
       int currcnt=0;

       for(int num:nums){
        if(num==1){
            currcnt++;
            maxcnt=max(maxcnt,currcnt);
        }
        else{
            currcnt=0;
        }

       }
       return maxcnt;   
    }
};