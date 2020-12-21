class Solution {
public:
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        //watch out the binary search soln
        int n=matrix.size(), ans, row=0, col=0;
        priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> p;
        
        for(auto i=0; i<n; i++) {
            p.push(make_pair(matrix[i][0], make_pair(i,0)));
        }
        
        while(k--) {
            ans = p.top().first;
            row = p.top().second.first;
            col = p.top().second.second;
            
            p.pop();
            col++;
            if(col<n)
                p.push(make_pair(matrix[row][col], make_pair(row,col)));
        }
        
        return ans;
    }
};
