#include<iostream>
#include<cmath>
using namespace std;

string returnBinary(int n){
    string res = "";
    int rem;
    while(n>=1){
        rem = n%2;
        n = n/2;
        res = to_string(rem)+res;
    }
    return res;
}

int returnDecimal(string s){
    int sum = 0;
    int p = 0;
    for(int i=s.length();i>=0;i--){
        sum = sum + ((((int)s[i])-48)*pow(2,p));
        p++;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    cout<<returnBinary(n)<<endl;
    cout<<returnDecimal("11")<<endl;

    return 0;
}