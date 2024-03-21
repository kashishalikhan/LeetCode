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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootInd = 0;
        return build(preorder, inorder, rootInd, 0, inorder.size() - 1);
    }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& rootInd, int left, int right){
        if(left > right) 
            return NULL;
        int pivot = left;
        while(inorder[pivot] != preorder[rootInd])
            pivot++;
        rootInd++;
        TreeNode * newNode = new TreeNode(inorder[pivot]);
        newNode -> left = build(preorder, inorder, rootInd, left, pivot - 1);
        newNode -> right = build(preorder, inorder, rootInd, pivot + 1, right);
        return newNode;
    }
};