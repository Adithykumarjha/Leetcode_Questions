class Solution {
public:
    int balancedStringSplit(string s) {
        int L=0,R=0,count=0;

        for(auto ch:s){
            if(ch=='L'){
                L++;
            }
            else{
                R++;
            }

            if(L==R){
                count++;
            }
        }
        return count;
        
    }
};