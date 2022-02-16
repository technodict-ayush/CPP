#include<iostream>
#include<vector>
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

class LinkedList{
public:
    Node* head;
    LinkedList():head(nullptr){}

    void push_back(int d){
        Node* n = new Node(d);
        if(head == nullptr){
            head = n;
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = n;
    }
    Node* getHead(){
        return head;
    }
    
};

Node* addList(Node* l1,Node* l2){
    string n1="",n2="";
    while(l1 != nullptr){
        n1 += to_string(l1->data);
        l1 = l1->next;
    }
    while(l2 != nullptr){
        n2 += to_string(l2->data);
        l2 = l2->next;
    }
    int i1 = stoi(n1);
    int i2 = stoi(n2);
    int sum = i1+i2;
    string sum1 = to_string(sum);
    LinkedList* l = new LinkedList();
    for(int i=0;i<sum1.length();i++){
        int s = (int)sum1[i] - 48;
        l->push_back(s);
    }
    return l->getHead();
}

int main(){

    LinkedList* l1 = new LinkedList();
    l1->push_back(2);
    l1->push_back(4);
    l1->push_back(9);

    printList(l1->getHead());
    LinkedList* l2 = new LinkedList();
    l2->push_back(5);
    l2->push_back(6);
    l2->push_back(4);
    l2->push_back(9);
    
    printList(l2->getHead());
    Node* l3 = addList(l1->getHead(),l2->getHead());
    printList(l3);
    return 0;
}