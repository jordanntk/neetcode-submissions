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
    int diameterOfBinaryTree(TreeNode* root) {
        int max_diameter = 0;

        getDepthAndUpdate(root, max_diameter);

        return max_diameter;
    }

    int getDepthAndUpdate(TreeNode* root, int& max_diameter) {
        if (!root) {
            return 0;
        }

        int l = getDepthAndUpdate(root->left, max_diameter);
        int r = getDepthAndUpdate(root->right, max_diameter);
        
        int current_diameter = l + r;
        max_diameter = std::max(max_diameter, current_diameter);

        return std::max(l, r) + 1;
    }
};
