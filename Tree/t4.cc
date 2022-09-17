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

void itrInorder(node *root)
{
    stack<node*> st;
    vector<int>inorder;
   
     node *temp = root;

    while(1)
    {
        if(temp != NULL)
        {
            st.push(temp);
            temp = temp->left;
        }
        else{
            if(st.empty() == true)
              break;

            temp = st.top();
            st.pop();
            inorder.push_back(temp->val);
            temp = temp->right;
        }
    }
   
    
    for(int i = 0 ; i<inorder.size() ; i++)
    {
        cout<<inorder[i]<<" ";
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

    itrInorder(root);


    return 0;
}
