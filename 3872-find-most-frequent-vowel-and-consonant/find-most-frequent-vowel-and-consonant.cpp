class Solution {
public:
    int maxFreqSum(string s) {

        int freq[26];
        int maxV=0,maxC=0;

        for(char c:s){
            int i=c-'a';
            freq[i]++;

            if(c=='a' || c=='e'||c=='i'||c=='o'||c=='u'){
                maxV=max(maxV,freq[i]);
            }else{
                maxC=max(maxC,freq[i]);
            }
        }

        return maxV+maxC;

        
    }
};