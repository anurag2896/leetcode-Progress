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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)
            return {};
        
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        vector<int> temp;
        q.push(root);
        // q.push(NULL);
        q.push(NULL);
        TreeNode* front;
        
        while(!q.empty()) {
            front=q.front();
            q.pop();
            if(front==NULL) {
                ans.push_back(temp);
                temp.clear();
                if(q.size()>0)
                    q.push(NULL);
            } else {
                temp.push_back(front->val);
                if(front->left!=NULL)
                    q.push(front->left);
                if(front->right!=NULL)
                    q.push(front->right);
            }
//             int len=q.size();
//             for(auto i=0; i<len; i++) {
//                 front=q.front();
//                 temp.push_back(front->val);
//                 if(front->left!=NULL)
//                     q.push(front->left);
//                 if(front->right!=NULL)
//                     q.push(front->right);
​
//                 q.pop();
//             }
//             ans.push_back(temp);
//             temp.clear();
        }
        
        return ans;
    }
};
