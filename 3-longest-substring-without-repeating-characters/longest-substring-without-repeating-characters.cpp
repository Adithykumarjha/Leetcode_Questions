class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<bool>visited(256,false);
        int left=0;
        int right=0;
        int res=0;

        while(right<n){
            while(visited[s[right]]){
                visited[s[left]]=false;
                left++;
            }
            visited[s[right]]=true;
            res=max(res,right-left+1);
            right++;
        }

        return res;


        
    }
};