class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>st(allowed.begin(),allowed.end());
        int sol=0;

        for(auto &w :words){
            bool flag=true;

            for(char c:w){
                if(!st.count(c)){
                    flag=false;
                    break;
                }
            }

            if(flag==true)sol++;
        }
        return sol;
        
    }
};