#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int a):data(a),next(nullptr){};
};

class LinkedList
{
    public:
    Node* head;

    LinkedList()
    {
        head = nullptr;
    }

    void push_front(int a)
    {
        Node* n = new Node(a);
        n->next = head;
        head = n;
    }
    void push_back(int a)  
    {
        Node* n = new Node(a);
        Node* temp = head;
        while (temp->next != nullptr)
        {
            /* code */
            temp = temp->next;

        }
        temp->next = n;
        
    }
    void push_at(int i,int a)  
    {
        Node* n = new Node(a);
        Node* temp = head;
        while(i>1)
        {
            temp = temp->next;
            i++;
        }
        n->next = temp->next;
        temp->next = n;
        
    }
};

int main()
{
    LinkedList l;
    cout<<"head is: "<<l.head<<endl;

    
    l.push_front(2);
    cout<<"data is: "<<l.head->data<<endl;
    cout<<"next is: "<<l.head->next<<endl;
    cout<<"head is pointing to: "<<l.head<<endl;

    l.push_back(3);
    cout<<"data is: "<<l.head->data<<endl;
    cout<<"next is: "<<l.head->next<<endl;
    cout<<"head is pointing to: "<<l.head<<endl;

    cout<<l.head->next->data<<endl;

    l.push_at(1,5);
    cout<<"data is: "<<l.head->data<<endl;
    cout<<"next is: "<<l.head->next<<endl;
    cout<<"head is pointing to: "<<l.head<<endl;

    cout<<l.head->next->data<<endl;

}