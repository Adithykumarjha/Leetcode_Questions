class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int j=0;
        int i=0;
        int fsol=0;
        int count=0;

        while(i<n){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
            i++;

            if(i-j>k){
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                    count--;
                }
                j++;
            }

            if(i-j==k){
                fsol=max(fsol,count);
            }
        }
        return fsol;
        
    }
};