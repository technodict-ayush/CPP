#include<iostream>
#include<fstream>
#include<map>

using namespace std;

int main(){
    ifstream family;
    string word;
    map<string,int> mp;

    family.open("names.txt");
  

    while(family>>word){
        if(mp.find(word) == mp.end()){
            mp[word] = 1;
        }
        else{
            mp[word]++;
        }
    }

    for(auto itr = mp.begin();itr != mp.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    
    return 0;
}