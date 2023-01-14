#include<bits/stdc++.h>
using namespace std;
class node
{ public:
    int data;
    node *right;
    node *left;

    node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

node *buildtree(node *root)
{
       cout<<"enter the data for root node"<<endl;
       int data;
       cin>>data;
       root=new node(data);

       if(data==-1)
       {
        return NULL;
       }

       cout<<"enter the data for left"<<data<<endl;
       root->left=buildtree(root->left);
       cout<<"enter the data for Right"<<data<<endl;
       root->right=buildtree(root->right);
       return root;
}

void levelordertraver(node * root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();
    if(temp->right)
    {
        q.push(temp->right);
    }
    if(temp->left)
    {
        q.push(temp->left);
    }
    }

}

int main()
{
    node *root=NULL;
    root=buildtree(root);
    levelordertraver(root);
    return 0;
}