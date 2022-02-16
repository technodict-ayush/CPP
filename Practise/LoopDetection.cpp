#include<iostream>
#include<set>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int d):data(d){}
};

void printList(Node* h){
    while(h->next != nullptr){
        cout<<h->data<<" ";
        h=h->next;
    }
    cout<<h->data;
}
bool loopDetect(Node* h){
    set<Node*> s;
    while(h != nullptr){
        if(s.find(h->next) != s.end()){
            return true;
        }
        else{
            s.insert(h);
            h = h->next;
        }
    }
    return false;    
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
    Node* n5 = new Node(5);
    n4->next = n5;
    n5->next = n3; //creating loop
    //n5->next = nullptr;

    //printList(head);
    cout<<loopDetect(head)<<endl;

    return 0;

}