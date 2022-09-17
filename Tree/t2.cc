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

void levelOrder(struct node *root)
{
    vector<vector<int>> ans;
    
    if(root == NULL)
     return ;

     queue<node*>q;
     q.push(root);

     while(!q.empty())
     {
        int size = q.size();

        vector<int> traversal;

        for(int i = 0 ; i<size ; i++)
        {
            node * node = q.front();
            q.pop();

            if(node->left != NULL)
             q.push(node->left);

            if(node->right != NULL)
             q.push(node->right);
           traversal.push_back(node->val);
        }

        ans.push_back(traversal);
     }

     for(int i = 0 ; i<ans.size(); i++)
     {
        for( int j = 0 ; j<ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
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

    levelOrder(root);


    return 0;
}
