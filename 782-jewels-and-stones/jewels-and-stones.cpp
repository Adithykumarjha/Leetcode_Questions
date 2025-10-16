class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int m=jewels.size();
        int n=stones.size();
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(stones[i]==jewels[j]){
                    count++;
                }
            }
        }

        return count;
        
    }
};