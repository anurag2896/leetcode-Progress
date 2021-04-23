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
    int minDepth(TreeNode* root) {
        // if(!root)
        //     return 0;
        // return 1 + min(minDepth(root->left),minDepth(root->right));
        queue<TreeNode*> q;
        TreeNode* ele;
        int level=0, n;
        if(root) {
            q.push(root);
            level++;
        }
        while(!q.empty()) {
            n=q.size();
            for(int i=0; i<n; i++) {
                ele=q.front();
                if(ele->left) {
                    q.push(ele->left);
                }
                if(ele->right){
                    q.push(ele->right);
                } 
                if(!ele->left && !ele->right) {
                    return level;
                }
                q.pop();
            }
            level++;
        }
        return 0;
    }
};
