#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        data = d;
        left=right=NULL;
    }
};

//FUNCTION BUILD A TREE AND RETURN ADDRESS OF ROOT NODE OF TREE
//PRE-ORDER BUILD OF A TREE - ROOT NODE,LEFT NODE,RIGHT NODE.
Node* buildTree()
{
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    Node* n = new Node(d); //BUILDING ROOT NODE.
    n->left = buildTree(); //RECURSIVE CALL TO BULD LEFT NODE.
    n->right = buildTree(); //RECURSIVE CALL TO BUILD RIGHT NODE.
    return n;
}
void print(Node* root){

    if(root==NULL){
        return;
    }

    cout<< root->data<<" ";
    print(root->left);
    print(root->right);

}
int main()
{
    Node* root = buildTree();
    print(root);
}