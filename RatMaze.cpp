class Solution{
    public:
    void solve(int i,int j,vector<vector<int>> &m, int n,vector<string>& path,string moves,int dr[],int dc[],vector < vector < int >>& vis){
        if(i==n-1&&j==n-1&&m[i][j]==1){
            path.push_back(moves);
            return;
        }
        string dir = "URDL";
        for(int k=0;k<4;k++){
            int ni=i+dr[k];
            int nj=j+dc[k];
            if(ni>=0 && nj>=0 && ni<n && nj<n && vis[ni][nj]==0 && m[ni][nj]==1){
                vis[i][j]=1;
                solve(ni,nj,m,n,path,moves+dir[k],dr,dc,vis);
                vis[i][j]=0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> path;
        vector < vector < int >> vis(n, vector < int > (n, 0));
        int dr[4]={-1,0,1,0};//URDL
        int dc[4]={0,1,0,-1};
        if(m[0][0]==1) solve(0,0,m,n,path,"",dr,dc,vis);
        return path;
    }
};
