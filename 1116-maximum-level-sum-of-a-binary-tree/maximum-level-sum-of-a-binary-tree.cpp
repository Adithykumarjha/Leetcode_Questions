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
    int maxLevelSum(TreeNode* root) {
        
        if(!root) return 0;

        queue<TreeNode*>q;
        q.push(root);

        int lvl=1;
        int maxlvl=1;
        int maxsum=INT_MIN;

        while(!q.empty()){
            int size=q.size();
            int lvlsum=0;

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();

                lvlsum+=node->val;

                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }

            if(lvlsum>maxsum){
                maxsum=lvlsum;
                maxlvl=lvl;
            }
            lvl++;
        }
        return maxlvl;
    }
};