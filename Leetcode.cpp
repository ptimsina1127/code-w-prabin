class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector <vector <int>> tempmatrix;
        tempmatrix = matrix;

        for (int i = 0 ; i < matrix.size(); ++i){
            for (int j = 0 ; j < matrix[i].size(); ++j){
                if (matrix[i][j]== 0 ){
                      for (int k = 0 ; k < matrix[i].size(); ++k ){
                          tempmatrix[i][k] = 0;
                      }
                      for (int k = 0; k < matrix.size();++k){
                          tempmatrix[k][j] = 0;
                      }                          
                }
            }
        }
        for (int i = 0 ; i < tempmatrix.size(); ++i){
            for (int j = 0 ; j < tempmatrix[i].size(); ++j){
                cout << tempmatrix[i][j];
            }
        }
    }
};

