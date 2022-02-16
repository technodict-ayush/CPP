#include<iostream>
using namespace std;

class Node{
public:    
    int data;
    Node* next;

    Node(int d):data(d),next(nullptr){}
    ~Node(){
        delete next;
    }

};
class LinkedList{
public:
    Node* head;
    LinkedList():head(nullptr){}

    void pushFront(int d){
        Node* n = new Node(d);
        if(head == nullptr){
            head = n;
            return;
        }
        n->next
        
    }

}