class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int cols=matrix[0].size(),rows=matrix.size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<rows;k++){
                        if(matrix[k][j])
                        matrix[k][j]=INT_MIN+1;
                    }
                    for(int k=0;k<cols;k++){
                        if(matrix[i][k])
                        matrix[i][k]=INT_MIN+1;
                    }
                }
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==INT_MIN+1) matrix[i][j]=0;
                cout<<matrix[i][j];
            }
            cout<<"/n";
        }
    }
};
