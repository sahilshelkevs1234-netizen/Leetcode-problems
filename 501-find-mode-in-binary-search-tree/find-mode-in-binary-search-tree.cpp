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
    void solve( TreeNode* root,unordered_map<int,int>& m){
        if(root == NULL){
            return ;
        }
        
          m[root->val]++;
        solve(root->left,m);
        solve(root->right,m);

    }

    vector<int> findMode(TreeNode* root) {
        vector<int> arr;
        unordered_map<int,int> m;
       solve( root,m);
        int maxi=0;

        for(auto it : m){
            maxi=max(maxi,it.second);
        }
        for(auto it : m){
            if(it.second == maxi){
                arr.push_back(it.first);

            }
        }
        return arr;

    }
};