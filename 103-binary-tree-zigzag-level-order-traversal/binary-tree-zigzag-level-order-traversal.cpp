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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL){
            return res;
        }

        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;

        while(!q.empty()){
            int s=q.size();
            vector<int>level;
            for(int i=0;i<s;i++){
                TreeNode *curr=q.front();
                q.pop();

                if(flag){ level.push_back(curr->val);}
                else{level.insert(level.begin(),curr->val);}

                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right !=NULL){
                    q.push(curr->right);
                }
            }
            res.push_back(level);
            flag= !flag;
        }
        return res;
        
    }
};