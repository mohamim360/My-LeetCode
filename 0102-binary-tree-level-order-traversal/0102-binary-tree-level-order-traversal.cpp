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
    vector<vector<int>> levelOrder(TreeNode* root) {
         
        vector<vector<int>>v;
        queue<TreeNode*>q;
        q.push(root); 
        int n=q.size();
          if(root==NULL){
            return v;
        }  
       
        while(q.empty()<=0){ 
            vector<int>v1;
            while(n--){ 
                    
               v1.push_back(q.front()->val);
                if(q.front()->left){
                    q.push(q.front()->left);
                }
                 if(q.front()->right){
                    q.push(q.front()->right);
                }    
                 q.pop(); 
            }
         n = q.size();
         v.push_back(v1);
        }

        return v;   
    }
};