#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
//first in first out

int main()
{
    queue<string> q;

    q.push("ayush");
    q.push("rainee");
    q.push("akhilesh");
    q.push("savita");

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    //priority queue
    //always pop max element first by default

    priority_queue<int> p;
    p.push(54);
    p.push(23);
    p.push(4);

    int size = p.size();
    for(int i=0;i<size;i++)
    {
        cout<<p.top()<<endl;
        p.pop();

    }

}