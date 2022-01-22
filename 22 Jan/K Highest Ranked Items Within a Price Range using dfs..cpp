class Solution {
    bool isSafe(int i,int j,int m,int n){
        if(i<0 || i>=m)
        return false;
        if(j<0 || j>=n)
        return false;
        return true;
    }
public:
    void func(vector<vector<int>>& grid,int a,int b,int i,int j,int k,vector<vector<int>>&res,int m,int n,vector<vector<bool>>&vis){
        if(vis[i][j]==true)
        return;
        vis[i][j]=true;
        if(grid[i][j]==0)
        return;
        if(k==0)
        return;
        if(grid[i][j]>=1){
            if(grid[i][j]>=a && grid[i][j]<=b && grid[i][j]!=1){
                vector<int>temp;
                temp.push_back(i);
                temp.push_back(j);
                res.push_back(temp);
                k--;
            }
        vector<int>x{-1,0,1,0};
        vector<int>y{0,1,0,-1};
        for(int r=0;r<4;r++){
        if(isSafe(i+x[r],j+y[r],m,n)){
        func(grid,a,b,i+x[r],j+y[r],k,res,m,n,vis);
        }
        }
        }
    }
    vector<vector<int>> highestRankedKItems(vector<vector<int>>& grid, vector<int>& pricing, vector<int>& start, int k) {
        int m = grid.size();
        int n =grid[0].size();
        vector<vector<int>>res;
        vector<vector<bool>>vis(m+1,vector<bool>(n+1,false));
        func(grid,pricing[0],pricing[1],start[0],start[1],k,res,m,n,vis);
        return res;
    }
};
