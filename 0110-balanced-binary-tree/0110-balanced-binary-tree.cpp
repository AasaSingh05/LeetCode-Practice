//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(h)
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
    //helper dfs function
    int dfs(TreeNode* root, bool& bal){
        //base case
        if(root == nullptr) return 0;

        //getting the left subtree
        int left = dfs(root->left, bal);
        //getting the right subtree
        int right = dfs(root->right, bal);
    
        //to check if the tree is imbalanced
        if(abs(left - right) > 1){
            bal = false;
        }

        //updation criteria
        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        //declaration and initialization
        bool bal = true;

        //function call
        dfs(root, bal);

        //return val
        return bal;
    }
};