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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int , multiset<int>>> mp;
        queue<pair<TreeNode*, pair<int,int>>> q;

        vector<vector<int>> ans;

        if(root ==NULL){
            return ans;
        }

        q.push(make_pair(root, make_pair(0,0)));

        while(!q.empty()){

            auto it = q.front();
            q.pop();

            TreeNode* node = it.first;
            int hl = it.second.first;
            int vl = it.second.second;

            mp[hl][vl].insert(node->val);

            if(node->left != NULL){
                q.push(make_pair(node->left, make_pair(hl-1, vl+1)));
            }

            if(node->right != NULL){
                q.push(make_pair(node->right, make_pair(hl+1, vl+1)));
            }
        }
        for(auto i : mp){
            vector<int> t;
            for(auto j: i.second){
                for(auto k : j.second){
                    t.push_back(k);
                }
            }
            ans.push_back(t);
        }
        return ans;
    }
};