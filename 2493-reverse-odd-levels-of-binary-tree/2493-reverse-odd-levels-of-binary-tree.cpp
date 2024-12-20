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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        int l=0;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<TreeNode*>v;
            
            for(int i=0;i<s;i++){
                TreeNode* node=q.front();
                q.pop();
                v.push_back(node);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(l%2==1){
                int l=0,r=v.size()-1;
                while(l<r){
                    int temp=v[l]->val;
                    v[l]->val=v[r]->val;
                    v[r]->val=temp;
                    l++;
                    r--;
                }
            }
            l++;
        }
        return root;
    }
};