#include<bits/stdc++.h>
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

void itrPreorder(node * root)
{
    stack<node*> st;
    vector<int>preorder;

    if(root == NULL)
     return;

     st.push(root);

     while(!st.empty())
     {
        node* top = st.top();
        st.pop();
        preorder.push_back(top->val);

        if( top->right != NULL)
          st.push(top->right);

        if( top->left != NULL)
          st.push(top->left);
     }
    
    for(int i = 0 ; i< preorder.size() ; i++)
    {
        cout<<preorder[i]<<" ";
    }

    cout<<endl;

}



int main()
{
    struct node *root =  new node(5);
    root->left = new node(6);
    root->right = new node(7);
    root->left->left = new node(8);
    root->left->right = new node(9);
    root->left->right->left = new node(1);

    itrPreorder(root);


    return 0;
}
