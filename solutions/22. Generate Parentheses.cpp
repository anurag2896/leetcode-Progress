class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper(n, res, 0, 0, "");
        return res;
    }
    
    void helper(int n, vector<string>& res, int open, int close, string curr) {
        if(open+close==2*n) {
           res.push_back(curr);
            return;
        }
        
        if(open<n)   
            helper(n, res, open+1, close, curr+'(');
        if(close<open)
            helper(n, res, open, close+1, curr+')');
    }
};
