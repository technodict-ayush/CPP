#include<iostream>
using namespace std;

class Node{
public:    
    int data;
    Node* next;
    Node* prev;
    Node(int d):data(d),next(nullptr),prev(nullptr){}
};

Node* head = nullptr;
Node* tail = nullptr;

void printListFront(){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
void printListBack(){
    Node* temp = tail;
    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp = temp->prev;
    }
}
void pushFront(int d){
    Node* n = new Node(d);
    if(head == nullptr){
        head = n;
        tail = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}
void pushAt(int i,int d){
    i--;
    Node* n = new Node(d);
    Node* temp = head;

    while(i--){
        temp = temp->next;
    }
    n->prev = temp;
    n->next = temp->next;
    temp->next = n;
    (n->next)->prev = n;

}
void deleteAt(int i){
    i--;
    Node* temp = head;
    while(i--){
        temp = temp->next;
    }
    Node* p = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete p;
}

int main(){
    pushFront(7);
    pushFront(6);
    pushFront(5);
    pushFront(4);
    pushFront(3);
    pushFront(2);
    printListFront();
    cout<<endl;
    pushAt(4,55);
    deleteAt(4);
    printListFront();
    return 0;
}