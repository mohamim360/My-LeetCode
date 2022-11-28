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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int>v;
        TreeNode* tem;
        queue<TreeNode*> q;
      if(root==NULL) {
           return v;
        }
     
        q.push(root);
      int n=q.size();
        while(!q.empty()) {
             
            int t;
            while(n--){
              
                tem=q.front();
               q.pop();
                t=tem->val;
                if(tem->left) {
                    q.push(tem-> left);
                }
                if(tem-> right) {
                    q.push(tem-> right);
                }
            } 
          n=q.size();
	        v.push_back(t);
        }
        return v; 
    }
};