#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int d):data(d),next(nullptr){}
};

int main(){
    Node n(5);
    Node* n1 = &n;

    cout<<n1->data;
    
    return 0;
}