class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr=0;
        int maxsum=0;

        for(int i:gain){
            curr+=i;
            maxsum=max(maxsum,curr);
        }
        return maxsum;
    }
};