class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int l = matrix.size();
    int b = matrix[0].size();
    int ans[l][b];
        int k =0;
        int m = 0;
    for(int j = 0; j < b; ++j) {
      for(int i = l -1 ; i >= 0; --i) {
            ans[k][m] = matrix[i][j];
            m++;
        }
        m = 0;
        k++;
    }
        for(int i = 0; i < l; ++i){
            for(int j = 0; j < b; ++j){
                matrix[i][j] = ans[i][j];
            }
        }
    }
    
};