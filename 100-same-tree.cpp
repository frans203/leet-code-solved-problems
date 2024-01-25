#include <iostream>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool comparison = p->val == q->val?true:false;
        if(p->left && q->left){
            return isSameTree(p->left, q->left);
        }
         else if(p->right && q->right){
            return isSameTree(p->right, q->right);
        } else if(p->right == nullptr && q->right){
            return false;
        }else if(p->left == nullptr && q->left){
            return false;
        }else{
            return comparison;

        }
    }
};

int main(){
    return 0;
}