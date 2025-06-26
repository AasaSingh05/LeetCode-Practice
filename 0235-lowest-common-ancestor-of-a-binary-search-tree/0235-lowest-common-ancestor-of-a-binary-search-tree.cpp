/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base cases 
        if(
            (root == nullptr) || (root == p) || (root == q)
        ){
            return root;
        }

        //Non trivial cases
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        //if both come as NOT null then the root is the lowest common ancestor
        if(left && right){
            return root;
        }

        //else we return the non NULL value between the two subtrees
        return left ? left : right;
    }
};