#include<iostream>
using namespace std;

void add(void){

    int a = 3;
    int *p = &a;
    int **p1 = &p;

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<**p1<<endl;

    cout<<"void add function";
}

int main(){
    add();
    return 0;
}

my $var = '123';

print 'hello';

my $a = "Ayush";

sub s1 
{
    local $a = "ajay";
    &s2;
}
sub s2 
{
    print "$a";
}