#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
//     int height(Node* root){
//         if(root==NULL){
//             return 0;

//         }
//         int lh=height(root->left);
//         int rh=height(root->right);
//         return max(lh,rh)+1;

//     }
// bool isBalanced (Node* root){
//   if(root==NULL){
//       return true;
//   }
//    if(isBalanced(root->left)==false){
//        return false;

//    }
//    if (isBalanced(root->right)==true){
//        return true;
//         }
//         int lh=height(root->left);
//         int rh=height(root->right);
//         if(abs(lh-rh)<=1){
//             return true;

//         }
//         else{
//             return false;

//         }
// }
void rightview(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();

            if (i == n - 1)
            {
                cout << curr->data << " ";
            };
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}
 
    int main()
    {
        struct Node *root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
        root->right->left = new Node(6);
        root->right->right = new Node(7);
        // height balanced tree
        //  if(isBalanced(root)){
        //     cout<<"Balanced tree"<<"\n";
        //  }
        //  else{
        //      cout<<"Unbalanced tree"<<"\n";

        // }
        // right view
        rightview(root); 
    }
