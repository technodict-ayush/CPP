#include<iostream>
using namespace std;

string addBinary(string a, string b) 
    {
        int la = a.length()-1;
        int lb = b.length()-1;
        int carry=0;
        char a1,b1;
        string sum,res = "";
        while(la>=0 || lb>=0)
        {
            la>=0?a1 = a[la]:a1 = '0';
            lb>=0?b1 = b[lb]:b1 = '0';
            
            if(a1=='0'&&b1=='0'&&carry==0)
            {
                sum="0";
                carry=0;
            }
            else if((a1=='0'&&b1=='1'&&carry==0)||(a1=='1'&&b1=='0'&&carry==0)||(a1=='0'&&b1=='0'&&carry==1))
            {
                sum="1";
                carry=0;
            }
            else if((a1=='1'&&b1=='1'&&carry==0)||(a1=='0'&&b1=='1'&&carry==1)||(a1=='1'&&b1=='0'&&carry==1))
            {
                sum="0";
                carry=1;
            }
            else
            {
                sum="1";
                carry=1;
            }
            res = sum+res;
            la--;
            lb--;
            
        }
        
        if(carry==1)
        {
            res = "1"+res;
        }
    return res;
    }
int main(){
    cout<<addBinary("111", "00")<<endl;
    return 0;
}    