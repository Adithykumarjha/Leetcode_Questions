//Height Checker

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expect=heights;
        int count=0;

        sort(expect.begin(),expect.end());

        for(int i=0;i<heights.size();i++){
            if(heights[i]!=expect[i]){
                count++;
            }
        }
       

        return count;
        
    }
};
