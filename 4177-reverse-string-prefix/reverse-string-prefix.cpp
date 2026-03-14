class Solution {
public:
    string reversePrefix(string s, int k) {
        string res="";
        int n=s.size();
        for(int i=k-1;i>=0;i--){
            res+=s[i];
        }

        for(int i=k;i<n;i++){
            res+=s[i];
        }
        return res;
        
    }
};