/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root,vector<TreeNode*> &v){
        
        if(root==NULL) return;
        //inorder traversal
        
        helper(root->left,v);
        v.push_back(root);
        helper(root->right,v);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> v;
        helper(root,v);
        int i;
        for(i=0;i<v.size()-1;i++){
            v[i]->left = NULL;
            v[i]->right=v[i+1];
        }
        v[i]->left = NULL;
        return v[0];
    }
};
