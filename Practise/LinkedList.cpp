#include<iostream>
using namespace std;

class Node{
public:    
    int data;
    Node* next;

    Node(int d):data(d),next(NULL){}
    ~Node(){
        if(next != NULL){
            delete next;
        }
    }

};

class LinkedList{
public:
    Node *head,*tail;

    LinkedList():head(NULL),tail(NULL){}
    ~LinkedList(){
        if(head != NULL){
            delete head;
        }
    }
    void push_front(int d){
        if(head == NULL){
            Node* n = new Node(d);
            head = tail = n;
            return;
        }
        Node* n = new Node(d);
        n->next = head;
        head = n;
    }
    void push_back(int d){
       
        if(head == NULL){
            Node* n = new Node(d);
            head = tail = n;
            return;
        }
        Node* n = new Node(d);
        tail->next = n;
        tail = n;
    }
    void insertAt(int d,int index)
    {
        Node* n = new Node(d);
        Node* temp = head;
        if(index == 0)
        {
            push_front(d);
        }
        while(index>1)
        {
            temp = temp->next;
            index--;
        }
        n->next = temp->next;
        temp->next = n;
    }
    void pop_front()
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back()
    {
        Node* temp = head;
        while((temp->next)->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
};

int main(){
    LinkedList l;
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_front(2);
    l.pop_front();
    l.pop_back();
    l.insertAt(44,1);

    l.print();
    return 0;
}