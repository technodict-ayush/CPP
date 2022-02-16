#include <iostream>
#include <vector>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v;
void convert(int a){
    
    int t = a;
    while(t>0){
        int p = t%2;
        t = t/2;
        v.push_back(p);
    }
    reverse(v.begin(),v.end());
    for(auto i:v){
        cout<<i;
    }
}

int main() {
    convert(9);
    return 0;
}