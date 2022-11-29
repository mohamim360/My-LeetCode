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
   bool isValidBST(TreeNode* root) {
          return valid(root, LONG_MIN, LONG_MAX);    
    }
    bool valid(TreeNode *root,long long min,long long max)
    {
        if(root==NULL){
        return true;
    }
    if((root->val<max) && (root->val>min)){
          bool left = valid(root->left,min, root->val);
            
          bool right = valid(root->right, root->val,max);
        
        return left&&right;   
    }
    else{
        return false;
    }
    
    }
    
};