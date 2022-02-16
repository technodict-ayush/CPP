#include <iostream>
using namespace std;

void pattern1(int r){
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
      

void pattern2(int r){
    int s = 2*r-1;
    for(int i=1;i<=r;i++){
        for(int k=1;k<=s;k++){
            cout<<" ";
        }
        s=s-2;
        int c = 2*i-1;
        for(int j=1;j<=c;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
   pattern2(5);
    return 0;
}