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
vector<int> istrue(TreeNode* root ,vector<int>& ans){
   
    if(root==NULL){

        return ans;

    }
    istrue( root->left,ans);
    ans.push_back(root->val);
    istrue( root->right,ans);

    return ans;

}
    bool findTarget(TreeNode* root, int k) {
    vector<int> ans;
    int i=0;
    ans = istrue( root,ans);

    int end =ans.size()-1;

    while(i<end){
      int  mid=ans[i]+ans[end];
        if(mid>k){
        
        end--;
      
        }
         if(mid<k){
    
        i++;
        }
        if(mid==k){
            return true;
        }
    }
    return false;
    }
};





