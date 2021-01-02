/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue <TreeNode* > q;
        q.push(root);
        TreeNode* x;
        bool l2r = true;
        
        if(!root)
            return res;
        
        while(!q.empty()) {
            int sz = q.size();
            vector<int> temp(sz);
            int index;
            
            for(int i=0; i<sz; i++) {
                x = q.front();
                q.pop();
                
                index = l2r ? i : sz - 1 - i;
                temp[index] = x->val;
                
                if(x->left!=NULL)
                    q.push(x->left);
​
                if(x->right!=NULL)
                    q.push(x->right);
            }
            res.push_back(temp);
            l2r = !l2r;
        }
        
        return res;
    }
};
