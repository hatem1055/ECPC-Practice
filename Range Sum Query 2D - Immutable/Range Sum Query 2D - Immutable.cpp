class NumMatrix {

public:
    vector<vector<int>> results;
    NumMatrix(vector<vector<int>>& matrix)
    {

        results = vector<vector<int>>(matrix.size(), vector<int>(matrix[0].size() + 1));
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix[i].size(); j++)
                results[i][j + 1] = results[i][j] + matrix[i][j];
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int final = 0;
        for (int i = row1; i <= row2; i++)
            final += results[i][col2 + 1] - results[i][col1];
        return final;
    }
};

