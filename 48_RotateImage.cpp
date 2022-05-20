class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j;
        int n=matrix.size();
        vector<vector<int>> b(n,vector<int>(n,0));
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix.size();j++){
                if(n%2==1 && i==n/2){
                    b[j][n/2]=matrix[i][j];
                }
                b[j][n-1-i]=matrix[i][j];
            }
        }
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix.size();j++){
                matrix[i][j]=b[i][j];}}
    }
};
