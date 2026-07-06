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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if (!root) return false;

        if (root->val == subRoot->val) {
            if (alignSub(root, subRoot)) return true;
        }

        bool checkLeft = isSubtree(root->left, subRoot);
        bool checkRight = isSubtree(root->right, subRoot);

        if (checkLeft or checkRight) return true;
        return false;
    }

    bool alignSub(TreeNode* root, TreeNode* subRoot){
        if (!root && !subRoot) {
            return true;
        }
        else if (!root || !subRoot) {
            return false;
        }

        if (root->val != subRoot->val) {
            return false;
        }

        bool checkLeft = alignSub(root->left, subRoot->left);
        bool checkRight = alignSub(root->right, subRoot->right);

        if (!checkLeft || !checkRight) return false;

        return true;
    }
};
