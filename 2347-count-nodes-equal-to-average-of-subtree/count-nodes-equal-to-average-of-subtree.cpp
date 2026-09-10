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
    int res = 0;
    pair<int, int> solve(TreeNode* root){ //(val, cnt of nodes)
        if(root->left == NULL && root->right == NULL){
            res++;
            return make_pair(root->val, 1);
        }
        pair<int, int> l;
        if(root->left)  l = solve(root->left);
        pair<int, int> r;
        if(root->right) r = solve(root->right);

        int sumOfNodes = l.first + r.first + root->val;
        int cntNodes = l.second + r.second + 1;

        if(sumOfNodes / cntNodes == root->val) res++;

        return make_pair(sumOfNodes, cntNodes);
    }
    int averageOfSubtree(TreeNode* root) {
        if(!root) return 0;
        solve(root);
        return res;
    }
};