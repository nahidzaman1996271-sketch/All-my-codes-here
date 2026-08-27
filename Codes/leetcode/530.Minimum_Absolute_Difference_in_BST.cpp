class Solution {
public:
    vector<int> vc;

    void dfs(TreeNode* root){
        if(!root) return;
        dfs(root->left);
        vc.push_back(root->val);
        dfs(root->right);
    }

    int getMinimumDifference(TreeNode* root){
        dfs(root);
        int ans = INT_MAX;
        for(int i = 0; i < vc.size() - 1; i++){
            ans = min(ans, vc[i+1] - vc[i]);
        }
        return ans;
    }
};