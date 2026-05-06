class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int rows = boxGrid.size();
        int cols = boxGrid[0].size();

        vector<vector<char>>res(cols,vector<char>(rows,'.'));

        for(int r=0; r<rows;r++){
            int p=cols-1;

            for(int c=cols-1;c>=0;c--){
                if(boxGrid[r][c]=='*'){
                    res[c][rows-1-r]='*';
                    p=c-1;
                }else if(boxGrid[r][c]=='#'){
                    res[p--][rows-1-r]='#';
                }
            }
        }
        return res;
    }
};