class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());
        int len=matrix.size();
        for(int i=0; i<len; i++) {
            for(int j=i+1; j<len; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // reverse(matrix.begin(), matrix.end());
        
    }
    
//     void print(vector<vector<int>> &matrix) {
//         int len=matrix.size();
//         for(int i=0; i<len; i++) {
//             for(int j=0; j<len; j++) {
//                 cout<<matrix[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
    
//     void transpose(vector<vector<int>> &matrix) {
//         int len=matrix.size();
//         for(int i=0; i<len; i++) {
//             for(int j=0; j<len; j++) {
//                 while(i!=j) {
//                     swap(matrix[i][j], matrix[j][i]);
//                 }
//             }
//         }
//     }
    
//     void reversemat(vector<vector<int>> &matrix) {
//         int start=0, end=matrix.size()-1, len=matrix.size();
//         for(int j=0; j<len; j++) {
//             for(int i=0; i<=len/2; i++) {
//                 swap(matrix[i][j], matrix[len-i-1][j]);
//             }
//         }
//     }
};
