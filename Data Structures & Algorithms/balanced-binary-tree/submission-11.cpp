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
    bool isBalanced(TreeNode* root) {
        return check(root)[0] == 1;
    }

private: 
    std::vector<int> check(TreeNode* root) {
        if (!root) return {1, 0};

        std::vector<int> l_check = check(root->left);
        std::vector<int> r_check = check(root->right);

        if (!l_check[0]) {
            return {0, 0};
        }

        if (!r_check[0]) {
            return {0, 0};
        }

        int checkBal = std::abs(l_check[1] - r_check[1]) <= 1 ? 1 : 0;
        int height = std::max(l_check[1], r_check[1]) + 1;

        return {checkBal, height};
    }
};
