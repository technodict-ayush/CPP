#include<iostream>
using namespace std;

class LinkedList;

class Node
{
    
    int data;
    Node* next;

    public:
    Node(int d):data(d),next(nullptr){}
    friend class LinkedList;
};

class LinkedList
{
    Node* head;

    public:
    LinkedList():head(nullptr){}

    void push_front(int d){
        Node* n1 = new Node(d);
        n1->next = head;
        head = n1;
    }
    void printList(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main(){
    LinkedList* l = new LinkedList();
    l->push_front(3);
    l->push_front(2);
    l->push_front(1);
    l->printList();
    return 0;
}