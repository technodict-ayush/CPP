#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node(int d):data(d),next(nullptr){}

};

class LinkedList
{
    public:
    node *head;
    LinkedList():head(nullptr){}

    void push_front(int a)
    {
        node *n1 = new node(a);
        n1->next = head;
        head = n1;

    }
    int Smartget(unsigned index)
    {
        node *temp = head;
        while(index--)
        {
            temp = temp->next;
        }
        return temp->data;
    }

    int get(unsigned index)
    {
        int i = 0;
        node *temp = head;
        while(i != index)
        {
            temp = temp->next;
            i++;
        }
        return temp->data;
    }

};

int main()
{
    LinkedList l;
    cout<<l.head<<endl;
    //cout<<l.head->next<<endl;

    l.push_front(5);

    cout<<l.head<<endl;
    cout<<l.head->data<<endl; 
    cout<<l.head->next<<endl;

    l.push_front(6);

    cout<<l.head<<endl;
    cout<<l.head->data<<endl;
    cout<<l.head->next<<endl;

    cout<<l.head->next->data<<endl;

    cout<<"getting the value\n";
    cout<<l.get(1)<<endl;

    cout<<"smartly getting the value\n";
    cout<<l.Smartget(1)<<endl;


}