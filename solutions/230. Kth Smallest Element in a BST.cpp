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
    
    //stack soln, iterative soln, left sum soln (<-follow up soln)
    
    // void fillStack(stack <TreeNode*> &st, TreeNode* root) {
    //     while(root!=NULL) {
    //         st.push(root);
    //         root=root->left;
    //     }
    // }
    
//     int kthSmallest(TreeNode* root, int k) {
//         TreeNode* curr;
//         int count=0;
        
//         stack <TreeNode *> st;
//         fillStack(st, root);
        
//         while(!st.empty() && count!=k) {
//             count++;
//             curr=st.top();
//             st.pop();
            
//             if(curr->right)
//                 fillStack(st, curr->right);
//         }
        
//         return curr->val;
//     }
    
    int lesssum(TreeNode *root) {
        if(!root)
            return 0;
        return 1 + (lesssum(root->left)) + (lesssum(root->right));
    }
    
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* curr;
    }
};
