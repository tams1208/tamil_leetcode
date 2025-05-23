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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        // empty
        if (!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            // find avg of siblings
            double sum = 0;

            int n = q.size();
            for (int i = 0; i<n; i++) {
                // access front
                TreeNode* front = q.front();
                q.pop();

                sum += front->val;

                // insert child if exists
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
            }

            // collected all sibling sum, now find avg
            ans.push_back(sum/n);
        }

        return ans;
    }
};