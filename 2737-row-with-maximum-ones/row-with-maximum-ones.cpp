class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int ans=0;
        int ind=0;
        for(int i=0;i<m;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    cnt++;
                }
                if(cnt>ans){
                    ans=cnt;
                    ind=i;
                }
            }
        }
        return {ind,ans};
        
    }
};