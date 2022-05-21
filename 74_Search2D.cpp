bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(),cols=matrix[0].size();
        for(int i=0;i<rows;i++){
            if(matrix[i][0]<=target&&matrix[i][cols-1]>=target){
                if(matrix[i][cols-1]==target) return true;
                for(int j=0;j<cols-1;j++){
                    if(matrix[i][j]==target)
                        return true;
                }
            }
        }
        return false;
    }
