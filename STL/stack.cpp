#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
//last in first out
int main(){

    stack<string> s;
    s.push("ayush");
    s.push("rainee");
    s.push("akhilesh");
    s.push("savita");

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<"--------------print all elements------"<<endl;
    //for(string t:s){
        //cout<<t<<endl; //cannot iterate via for loop
    //}

}