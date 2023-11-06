class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    vector<vector<int>> m2(col, vector<int>(row,0));

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            m2[j][i] = matrix[i][j];
        }
    }

    return m2;
    }
    };