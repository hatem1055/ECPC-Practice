class NumMatrix {
public:
    vector<vector<int>> temp;
    NumMatrix(vector<vector<int>>& matrix) {
        int s = 0;
        for(int i = 0;i < matrix.size();i++){
            vector<int> row {};
            for(int j = 0;j < matrix[i].size();j++){
                s += matrix[i][j];
                row.push_back(s);
            }
            temp.push_back(row);
        }
    }
    int get_prev_sum(int r,int c){
        if(r == 0 && c == 0){
            return 0;
        }
        if (c == 0){
            return get_prev_sum(r - 1,temp[r].size());
        }
            
        return temp[r][c - 1];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int s = 0;
        for(int i = row1; i <= row2;i++){
            s += temp[i][col2] - get_prev_sum(i,col1);
        }
        return s;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */