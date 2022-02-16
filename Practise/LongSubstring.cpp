#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    string s = "AyushAyuAmmm";

    //for(int i=0;i<s.length();i++){
     //   cout<<s[i]<<endl;
    //}
    string temp = "";

    //vector<string> vstr;
    //map<string,int> mstr;

    int max = 0;
        
    for(int i = 0;s[i] != '\0';i++)
    {
        if(temp.find(s[i]) == string::npos){
            temp = temp+s[i];
        }
        else
        {
                //vstr.push_back(temp);
                //mstr.insert({temp,temp.size})
            if(temp.size()>max){
                max = temp.size();
            }
            temp = s[i];
        }
    }
    //for (int i = 0; i < vstr.size(); i++)
        //cout << vstr[i].size() << " ";
    
    cout<<max;
    return 0;
}