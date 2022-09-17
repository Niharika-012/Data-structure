#include<iostream>
using namespace std;

struct node{
    int val;
    struct node *left ;
    struct node *right;
    node(int data)
    {
        val = data;
        left = right = NULL;

    }
};

void inorderTraversal(struct node *root)
{
    if( root == NULL)
      return;

    inorderTraversal(root->left);
    cout<<root->val<<" ";
    inorderTraversal(root->right);
}

void preorderTraversal( struct node *root)
{
     if(root == NULL)
        return;

        cout<<root->val<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
}

void postorderTraversal(struct node * root)
{ 
    if(root == NULL)
      return;

      postorderTraversal(root->left);
      postorderTraversal(root->right);
      cout<<root->val<<" ";
     

}

int main()
{
    struct node *root =  new node(5);
    root->left = new node(6);
    root->right = new node(7);
    root->left->left = new node(8);
    root->left->right = new node(9);
    root->left->right->left = new node(1);

    inorderTraversal(root);
    cout<<endl;
    preorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;

    return 0;
}
