class Solution {
public:
    char findTheDifference(string s, string t) {
        char sol=0;
        for(char &ch:s){
            sol ^=ch;
        }
        for(char &ch:t){
            sol ^=ch;
        }

        return sol;
    }
};