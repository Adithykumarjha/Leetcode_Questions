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
int maxdiameter=0;
    int diameterOfBinaryTree(TreeNode* root) {
        //int maxdiameter=0;
        subDiameter(root);
        return maxdiameter;

    }

    int subDiameter(TreeNode * root){
        if(root==NULL){
            return 0 ;
        }

        int lheight=subDiameter(root->left);
        int rheight=subDiameter(root->right);
        if(maxdiameter<lheight+rheight){
            maxdiameter=lheight+rheight;
        }

        return 1+ max(lheight,rheight);
    }


};