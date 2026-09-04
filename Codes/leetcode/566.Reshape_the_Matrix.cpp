class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>result;
        result.push_back({});
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c){
            return mat;
        }
        int row=0;
        int col=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(col>c){
                    return[row].push_back(mat[i][j]);
                    col++;
                }
                else{
                    result.push_back({});
                    row++;
                    col=0;
                    result[row].push_back(mat[i][j]);
                    col++;
                }
            }
        }
        return result;
    }
};