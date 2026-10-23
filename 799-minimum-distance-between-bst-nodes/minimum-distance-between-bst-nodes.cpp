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
TreeNode* pre=NULL;
   int answer(TreeNode* root) {
     
     int ans=INT_MAX;
     if(root==NULL){
        return INT_MAX;
     }
     if(root->left !=NULL){
        int leftmin=answer(root->left);
        ans=min(ans,leftmin);

     }
     if(pre!=NULL){
        ans=min(ans,root->val-pre->val);
    
     }
    pre=root;
     if(root->right !=NULL){
        int rightmin=answer(root->right);
          ans=min(ans,rightmin);

     }
     return ans;
   }
    int minDiffInBST(TreeNode* root) {
        return answer(root);
    }
};