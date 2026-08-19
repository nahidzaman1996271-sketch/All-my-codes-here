class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> map;
        temp(root, map);
        int max = -1;
        for(pair<int,int> p:map){
            if(p.second > max){
                max = p.second;
            }
        }
        vector<int> out;
        for(pair<int,int> p:map){
            if(p.second == max){
                out.push_back(p.first);
            }
        }
        return out;
    }
    void temp(TreeNode* root, unordered_map<int,int> &map){
        if(root == NULL) return;
        temp(root->left, map);
        if(map[root->val]==0){
            map[root->val] =1;
        } else{
            map[root->val] += 1;
        }
        temp(root->right,map);
    }
};