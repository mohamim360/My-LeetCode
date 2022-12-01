/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
      void order(Node* root,vector<int> &v) {
        if(root==NULL) {
            return;
        } 
       int n=root->children.size();
      
        for(int i=0;i<n;i++) {
            order(root->children[i],v);
        }
        v.push_back(root->val);
    }
    vector<int>postorder(Node* root) {
        vector<int>v;
        order(root,v);
        return v;
    }
};