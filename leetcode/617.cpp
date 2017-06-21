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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* t;
        if(t1 == NULL) {
            if(t2 == NULL) {
                return NULL;
            } else {
                t = new TreeNode(t2->val);
                t->left = mergeTrees(NULL, t2->left);
                t->right = mergeTrees(NULL, t2->right);
            }
        } else {
            if(t2 == NULL) {
                t = new TreeNode(t1->val);
                t->left = mergeTrees(t1->left, NULL);
                t->right = mergeTrees(t1->right, NULL);
            } else {
                t = new TreeNode(t1->val + t2->val);
                t->left = mergeTrees(t1->left, t2->left);
                t->right = mergeTrees(t1->right, t2->right);
            }
        }
        return t;
    }
};