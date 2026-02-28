class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int temp=num;
        int res=0;
        while(temp>0){
            res=temp%10;
            temp/=10;
            if(res>0 && num%res==0){
                count++;
            }
        }
        return count;
    }
};