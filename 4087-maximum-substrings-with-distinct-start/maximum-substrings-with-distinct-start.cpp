class Solution {
public:
    int maxDistinct(string s) {
        int letters[26]={0};
        int ans=0;
        for(char c:s){
            letters[c-'a']++;
        }

        for(int i=0;i<26;i++){
            if(letters[i]!=0){
                ans++;
            }
        }
        return ans;
    }
};