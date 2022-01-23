class Solution {
    bool isSafe(int i,int j,int m,int n){
        if(i<0 || i>=m)
        return false;
        if(j<0 || j>=n)
        return false;
        return true;
    }
public:
    vector<vector<int>> highestRankedKItems(vector<vector<int>>& grid, vector<int>& pricing, vector<int>& start, int k) {
        int m = grid.size();
        int n =grid[0].size();
        vector<vector<int>>res;
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        vis[start[0]][start[1]]=true;
        int a=pricing[0];
        int b=pricing[1];
        queue<pair<int,int>>q;
        q.push({start[0],start[1]});
        while(!q.empty()){
        if(k==0) break;
        auto node=q.front();
            
        q.pop();
            
        int i=node.first;
        int j=node.second;
            
        if(grid[i][j]==0) continue;
            
        if(grid[i][j]>=a && grid[i][j]<=b){
        res.push_back({i,j});
        k--;
        }
            
        if(grid[i][j]>0){
        vector<int>x{0,1,0,-1};
        vector<int>y{1,0,-1,0};
        for(int u=0;u<4;u++){
        int p=i+x[u];
        int r=j+y[u];
        if(!isSafe(p,r,m,n)) continue;
        if(vis[p][r]==true) continue;
        vis[p][r]=true;
        q.push({p,r});
        }
        }
        }
       return res; 
    }
};
