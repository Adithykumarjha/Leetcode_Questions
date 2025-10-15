class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char>vowels={'a','e','i','o','u','A','E','I','O','U'};
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(vowels.count(s[l]) && vowels.count(s[r])){
                swap(s[l++],s[r--]);
            }
            else if(vowels.count(s[l]))r--;
            else if(vowels.count(s[r]))l++;
            else{
                l++;
                r--;
            } 
        }
        return s;

        
    }
};