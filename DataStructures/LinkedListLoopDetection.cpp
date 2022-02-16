#include<iostream>
using namespace std;

//node -> data, next
class Node
{
    public:
    int data;
    Node* next = nullptr;
    Node(int a):data(a){}
};

class LinkedList
{
    public:
    Node* head;
    LinkedList()
    {
        head = nullptr;
    }

    void push_back(int a)
    {
        Node* n = new Node(a);
        if(head == nullptr)
        {
            head = n;
            n->next = nullptr;
        }
        else
        {
            Node* temp = head;
            while(temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = n;
        }    
    }
    void makeCycle(int i)
    {
        Node* temp = head;
        Node* n;
        int count = 1;
        while(temp->next != nullptr)
        {
            if(count == i)
            {
                n = temp;
            }
            temp = temp->next;
            count++;
        }
        temp->next = n;
    }
    bool detectCycle()
    {
        Node* slow = head;
        Node* fast = head;

        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                return true;
            }
            
        }
        return false;
    }
    void deleteCycle()
    {
        Node* slow = head;
        Node* fast = head;

        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {

                fast = head;
                while(fast->next != slow->next)
                {
                    fast = fast->next;
                    slow = slow->next;
                }
                slow->next = nullptr;
                break;
            }
            
        }
    }
    void printList()
    {
        Node* temp = head;
        while (temp->next != nullptr)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<" ";
        cout<<endl;

    }

};

int main()
{
    LinkedList l;
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);

    l.printList();
    l.makeCycle(4);

    cout<<l.detectCycle()<<endl;
    l.deleteCycle();
    l.printList();
    cout<<l.detectCycle()<<endl;

}