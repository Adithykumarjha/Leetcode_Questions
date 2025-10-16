class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p=abs(x-z);
        int q=abs(y-z);
        if(p<q){
            return 1;
        }else if(p==q){
            return 0;
        }
        else{
            return 2;
        }
        
    }
};