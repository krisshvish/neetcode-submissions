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
        int d = 0;
        auto depth = [&](auto&& self, TreeNode* root) -> int {
            if (!root) return 0;

            int dl = self(self, root->left);
            int dr = self(self, root->right);

            d = max(d, dl+dr);

            return max(dl, dr) +1;
        };

        depth(depth, root);

        return d;
    }
};
