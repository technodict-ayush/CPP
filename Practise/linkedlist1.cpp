#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int d):data(d),next(nullptr){}
};

class LinkedList{
    public:
    Node* head;
    LinkedList():head(nullptr){};

    void push_front(int d){
        Node* n = new Node(d);
        n->next = head;
        head = n;
    }

    void printList(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void reverse(){
        Node* past = nullptr;
        Node* present = head;

        while(present != nullptr){
            Node* future = present->next;
            present->next = past;
            past = present;
            present = future;
        }
        head = past;

    }

};

int main(){
    LinkedList l;
    l.push_front(10);
    l.push_front(9);
    l.push_front(8);
    l.push_front(7);
    l.printList();
    l.reverse();
    l.printList();
    return 0;
}