#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int d):data(d),next(nullptr){}
};

void printList(Node* h){
    while(h != nullptr){
        cout<<h->data<<" ";
        h = h->next;
    }
    cout<<endl;
}
Node* reverse_list(Node* h){
    Node* past = nullptr;
    Node* present = h;
    Node* future = nullptr;

    while(present != nullptr){
        future = present->next;
        present->next = past;
        past = present;
        present = future;
    }
    return past;
}

int main(){
    Node* head = nullptr;
    Node* n1 = new Node(1);
    head = n1;
    Node* n2 = new Node(2);
    n1->next = n2;
    Node* n3 = new Node(3);
    n2->next = n3;
    Node* n4 = new Node(4);
    n3->next = n4;
    n4->next = nullptr;
    printList(head);
    Node* new_head = reverse_list(head);
    printList(new_head);
    return 0;
}
