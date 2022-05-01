#include<iostream>
using namespace std;

class dlist
{
    class Node{
        int data;
        Node* left;
        Node* right;

        Node(int d):data(d),left(nullptr),right(nullptr){}

    };
    Node* head;
    
public:

    dlist():head(nullptr){}

    void push_front(int d){
        Node* n = new Node(d);
        n->right = head;
        head = n;
    }

    void printList(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<endl;
            temp = temp->right;
        }
    }
};