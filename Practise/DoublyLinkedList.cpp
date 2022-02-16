#include<iostream>
using namespace std;

class Node{
public:
    Node* next;
    Node** prev;
    int data;
    Node(int d):next(nullptr),prev(nullptr){}
};

class LinkedList{
public:
    Node* head;
    LinkedList():head(nullptr){}
    void push_front(int d){
        Node* n1 = new Node(d);
        if(head == nullptr){
            head = n1;
            n1->prev = &head;
        }
        head->prev = &n1;
        n1->next = head;
        head = n1;
        n1->prev = &head;
    }
    Node* getHead(){
        return head;
    }
};

void printList(Node* temp){
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    LinkedList* l1 = new LinkedList();
    l1->push_front(2);
    l1->push_front(1);
    printList(l1->getHead());
    return 0;
}