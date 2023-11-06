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
    void reversePre(TreeNode* root, vector<int> &ans, int level){
        if(root == NULL){
            return ;
        }

        if(ans.size() == level) ans.push_back(root->val);

        reversePre(root->right, ans, level+1);
        reversePre(root->left, ans, level+1);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        reversePre(root, ans, 0);
        return ans;
    }
};