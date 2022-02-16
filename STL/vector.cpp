#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//vector is dynamic size array,
//whenever it finds its size is full,
//it creates a new memory block of double size and reload element in it.

int main()
{

        vector<int> v;
        cout<<v.capacity()<<endl;
        v.push_back(66);
        cout<<v.capacity()<<endl;
        v.push_back(25);
        cout<<v.capacity()<<endl;
        v.push_back(33);
        cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;
        cout<<"-----------------------------------\n";
        for(int i:v){
            cout<<i<<endl;
        }
        cout<<"-----------------------------------\n";
        cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;
        v.clear();
        cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;
        cout<<"---------giving size with value--------------------------\n";
        vector<int> v1(5,1);
        for(int i:v1){
            cout<<i<<endl;
        }
        cout<<"----------copy from a vector-------------------------\n";
        vector<int> v1_cpy(v1);
        for(int i:v1_cpy){
            cout<<i<<endl;
        }


}