

#include<vector>
#include<iostream>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
vector<int> vec_int = {1,3,5,3,42,4,3,7,8,6};
int arr_int[10] = {1,3,5,3,42,4,3,7,8,6};
char arr_char[10] = {'d','b','a','b','a','b','a','b','a','b'};
const char *char_star = "hello dear";

cout<<*find(vec_int.begin(), vec_int.end(), 42)<<endl;
cout<<*find(arr_int, arr_int+10, 42)<<endl;
cout<<*find(arr_char, arr_char+10, 'd')<<endl;
cout<<*find(char_star, char_star+10, 'd')<<endl;


return 0;
}