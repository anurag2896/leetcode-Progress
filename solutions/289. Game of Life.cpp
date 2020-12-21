class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m,n;
        m=board.size();
        n=board[0].size();
        int neigh[3]= {0, -1, 1};
        int row, col, count;
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                count=0;
                
                for(auto k=0; k<3; k++) { //row
                    for(auto l=0; l<3; l++) { //col
                        row = i+neigh[k];
                        col = j+neigh[l];
                        
                        if(!(k==0 && l==0)) { //difference between !(a & b) and !a & !b
                            if(row>=0 && col>=0 && row<m && col<n && abs(board[row][col])==1) {
                                count++;
                            }
                        }
                    }
                }
                
                if(board[i][j]==1 && (count>3 || count<2)) {
                    board[i][j]=-1;
                }
                
                if(board[i][j]==0 && count==3)
                    board[i][j]=2;
            }
        }
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(board[i][j]>0)
                    board[i][j]=1;
                else
                    board[i][j]=0;
            }
        }
    }
};
