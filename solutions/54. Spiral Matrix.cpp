class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=0, col=0, row_max=matrix.size()-1, col_max=matrix[0].size()-1;
        vector<int> res;
        
        while(row<=row_max && col<=col_max) { //IMP this condition
            for(int i=col; i<=col_max; i++) {
                res.push_back(matrix[row][i]);  //right
            }
            row++;
            
            for(int i=row; i<=row_max; i++) {
                res.push_back(matrix[i][col_max]);  //down
            }
            col_max--;
            
            if(row>row_max || col>col_max)  //IMP this condition
                break;
            
            for(int i=col_max; i>=col; i--) {
                res.push_back(matrix[row_max][i]);  //left
            }
            row_max--;
            
            for(int i=row_max; i>=row; i--) {
                res.push_back(matrix[i][col]);  //up
            }
            col++;
        }
        
        return res;
    }
};
