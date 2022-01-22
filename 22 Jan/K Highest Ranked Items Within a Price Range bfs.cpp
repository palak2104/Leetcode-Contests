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
        vector<vector<bool>>vis(m+1,vector<bool>(n+1,false));
        int i=start[0];
        int j=start[1];
        vis[i][j]=true;
        int a=pricing[0];
        int b=pricing[1];
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            i=node.first;
            j=node.second;
            if(grid[i][j]==0)
            continue;
            if(grid[i][j]>=1){
            if(grid[i][j]>=a && grid[i][j]<=b && grid[i][j]!=1){
                vector<int>temp;
                temp.push_back(i);
                temp.push_back(j);
                res.push_back(temp);
            }
           vector<int>x{-1,0,1,0};
           vector<int>y{0,1,0,-1};
           for(int r=0;r<4;r++){
           if(isSafe(i+x[r],j+y[r],m,n) && vis[i+x[r]][j+y[r]]==false){
           q.push({i+x[r],j+y[r]});
           vis[i+x[r]][j+y[r]]==true;
           }
           }
           }
            
        }
        vector<vector<int>>temp(k+1);
        for(int i=0;i<k;i++)
        temp[i]=res[i];
        //func(grid,pricing[0],pricing[1],start[0],start[1],k,res,m,n,vis);
        return temp;
    }
};
