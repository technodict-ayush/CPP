#include<iostream>
using namespace std;

template <typename T>
class list{
    class Node{
    public:
        T data;
        Node* next;
        Node(T d):data(d),next(nullptr){};
    };


Node* head;        
public:
    list():head(nullptr){};

    void push_front(T d)
    {
        Node* n = new Node(d);
        n->next = head;
        head = n;
    }

    void push_back(T d)
    {
        Node* n = new Node(d);

        if(head == nullptr){
            head = n;
            return;
        }
        Node* temp = head;

        while(temp->next){
            temp = temp->next;
        }
        temp->next = n;
    }

    void print()
    {
        Node* temp = head;
        while(temp)
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

    void reverse()
    {
        Node* past = nullptr;
        Node* present = head;
        Node* future = nullptr;


        while(present != nullptr){
            future = present->next;
            present->next = past;
            past = present;
            present = future;
        }
        head = past;
    }

    void at_back(int n){

        Node* present = head;
        Node* past = head;

        while(present->next){
            if(n<=0){
                past = past->next;
            }
            n--;
            present = present->next;
        }
        cout<<"value at index is: "<<past->data<<endl;
        
    }
};

int main(){
    list<int> *l = new list<int>();
    l->push_back(1);
    l->push_back(2);
    l->push_back(3);
    l->push_back(4);
    l->push_front(0);
    l->print();
    cout<<endl;
    l->reverse();
    l->print();
    cout<<endl;
    l->at_back(3);
    return 0;
}