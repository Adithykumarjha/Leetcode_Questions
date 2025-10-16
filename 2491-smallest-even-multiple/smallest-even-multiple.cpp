class Solution {
public:
    int smallestEvenMultiple(int n) {
        int result=0;
        if(n%2!=0){
            result=n*2;
        }
        else{
            result=n*1;
        }

        return result;
        
    }
};