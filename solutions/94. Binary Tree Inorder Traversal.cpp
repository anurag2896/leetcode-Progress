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
    
//     void helperFunction (TreeNode* root, vector<int> &ans) {
//         if(root==NULL)
//             return;
        
//         helperFunction(root->left, ans);
//         ans.push_back(root->val);
//         helperFunction(root->right, ans);
//     }
    
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector <int> ans;
//         helperFunction(root, ans);
//         return ans;
//     }
    
        vector<int> inorderTraversal(TreeNode* root) {
            vector <int> ans;
            stack <TreeNode*> st;
            
            if(root==NULL)
                return ans;
            
            while(root!=NULL || !st.empty()) {
                while(root!=NULL) {
                    st.push(root);
                    root=root->left;
                }
                
                root=st.top();
                st.pop();
                ans.push_back(root->val);
                
                root=root->right;
            }
            
            return ans;
        }
};
