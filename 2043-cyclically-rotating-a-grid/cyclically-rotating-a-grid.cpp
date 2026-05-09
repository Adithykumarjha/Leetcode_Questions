class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int t=0,l=0;
        int b = grid.size()-1;
        int r=grid[0].size()-1;

        while(t<b && l<r){
            int len=b-t;
            int wid=r-l;
            int perimeter=2*len+2*wid;
            int ra=k%perimeter;

            while(ra--){
                int tmp=grid[t][l];

                for(int i=l;i<r;i++){
                    grid[t][i]=grid[t][i+1];
                }
                for(int i=t;i<b;i++){
                    grid[i][r]=grid[i+1][r];
                }
                for(int i=r;i>l;i--){
                    grid[b][i]=grid[b][i-1];
                }
                for(int i=b;i>t;i--){
                    grid[i][l]=grid[i-1][l];
                }

                grid[t+1][l]=tmp;


            }
            t++;
            l++;
            r--;
            b--;
        }
        return grid;
    }
};