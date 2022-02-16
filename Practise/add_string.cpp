#include<iostream>
#include<algorithm>
using namespace std;


    string addStrings(string num1, string num2) {
        string res = "";
        int carry = 0;
        int max_length = num1.length()>num2.length()?num1.length():num2.length();
       
            //int sum = (((int)(num1[max_length]))-48) + (((int)(num2[max_length]))-48) + carry;
            int i1 = num1.length()-1;
            int i2 = num2.length()-1;
            while(i1 >= 0 || i2 >= 0)
            {
                int sum = (i1>=0?((int)num1[i1]-48):0)+(i2>=0?((int)num2[i2]-48):0)+carry;
                carry = sum/10;
                string temp = to_string(sum%10);
                res = temp+res;
                i1--;
                i2--;
            }
        if(carry != 0){
            res = "1"+res;
        }
        
        return res;
    }
int main(){
    cout<<addStrings("111", "2");
    return 0;
}