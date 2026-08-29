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
    int preIdx = 0;
    unordered_map<int, int> idx;
public:
    // TreeNode* dfs(vector<int>& preorder, int l,int r){
    //     if(l > r) return nullptr;
    //     int root_value = preorder[preIdx++];   
    //     TreeNode * root = new TreeNode(root_value);
    //     int mid = idx[root_value];
    //     root->left = dfs(preorder, l, mid - 1);
    //     root->right = dfs(preorder, mid + 1, r);
    //     return root;
    // }
    TreeNode* dfs(vector<int>& preorder, int l, int r){
        if(l > r) return nullptr;
        int root_value = preorder[preIdx++];
        TreeNode* root = new TreeNode(root_value);
        int mid = idx[root_value];
        root->left = dfs(preorder, l, mid - 1);
        root->right = dfs(preorder, mid + 1, r);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i < inorder.size(); i++){
            idx[inorder[i]] = i;
        }

        return dfs(preorder, 0, inorder.size() - 1);

    }
};
