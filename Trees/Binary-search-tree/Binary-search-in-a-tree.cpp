
/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

bool binarysearch(Node* root,int key){
    if(root==nullptr)return false;
    if(root->data==key)return true;
    if(key<root->data){
        binarysearch(root->left,key);
    }else{
        binarysearch(root->right,key);
    }
}
class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        binarysearch(root,key);
    }
};