#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;
public:
    Node(int d):data(d),next(NULL){}

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }

    friend class List;
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }
    ~List(){
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
        }
        Node* n = new Node(d);
        tail->next = n;
        tail = n;
    }
    void pop_front(){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void print(){
        Node* temp = head;
        while(temp->next != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
    void insert(int data,int pos){
        if(pos == 0){
            push_front(data);
            return;
        }
        Node* n = new Node(data);
        Node* temp = head;
        while(pos>1){
            temp = temp->next;
            pos--;
        }
        n->next = temp->next;
        temp->next = n;
    }
    bool search(int key){
        Node* temp = head;
        while(temp->next != NULL)
        {
            if(temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        if(temp->data == key)
        {
                return true;
        }

        return false;
    }
   
    bool recSearch(int key){
        Node* temp = head;
        if(temp->next == NULL && temp->data != key){
            return false;
        }
        else if(temp->data == key){
            return true;
        }
        else{
            head = head->next;
            recSearch(key);
        }
    }

};