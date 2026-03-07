class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char>v{'a','e','i','o','u','A','E','I','O','U'};
        int vowel=0;
        int mid=s.length()/2;

        for(int i=0;i<mid;i++){
            char A=s[i];
            char B=s[mid+i];

            if(v.count(A))vowel++;
            if(v.count(B))vowel--;
        }
        return vowel==0;
        
    }
};