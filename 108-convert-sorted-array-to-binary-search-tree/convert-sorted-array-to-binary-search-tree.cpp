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

TreeNode* build (vector<int> nums,int i,int e){


       if(i>e){
            return NULL;
        }
            int mid=i+(e-i)/2;
              TreeNode* root= new TreeNode(nums[mid]);
             root->left=build(nums,i,mid-1);
              root->right=build(nums,mid+1,e);
              return root;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int i=0;
        int e=nums.size()-1;
        if( nums.size()==0){
            return NULL;
        }
        return build(nums,i,e);

      
        
    }
};