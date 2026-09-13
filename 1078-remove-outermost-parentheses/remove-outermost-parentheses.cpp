class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int counter=0;

        for(int i=0;i<s.length();i++){
            if(s[i]==')') counter--;
            if(counter !=0) res.push_back(s[i]);
            if(s[i]=='(') counter++;
        }

        return res;
    }
};