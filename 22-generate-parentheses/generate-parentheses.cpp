class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        solve(0,0,"",n,res);
        return res;
        
    }


    private:
    void solve(int open,int close,string curr,int n, vector<string>&res){
        if(close==n ){
            res.push_back(curr);
            return;
        }

        if(open<n){
            solve(open+1,close,curr+"(",n,res);
        }

        if(close<open){
            solve(open,close+1,curr+")",n,res);
        }
    }
};