#include<vector>
#include<iostream>
using namespace std;

int main()
{
vector<int> vec_int(10);
vec_int.push_back(42);
cout<<vec_int.size()<<endl;
return 0;
}