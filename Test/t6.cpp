#include<vector>
#include<iostream>
using namespace std;

template <class T>
class Stack {
private:
  vector<T> data;
public:
  void push(const T &item) {data.push_back(item);}
  T pop(void) {return data.pop_back();}
};

int main()
{ 
    Stack<int> s;
    s.push(2);

    cout<<s.pop()<<endl;
    return 0;
}