#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;


bool comparePrice(pair<string,int> p1, pair<string,int> p2){
    return p1.second < p2.second;
    
}

vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    // your code  goes here
    if(S == "name"){
        sort(v.begin(),v.end());
    }
    else if(S == "price"){
        sort(v.begin(),v.end(),comparePrice);
    }
    return v;
}

int main(){

    vector<pair<string,int>> fruits = {
        {"Mango",100},
        {"Guava",70},
        {"Grapes",40},
        {"Apple",60},
        {"Banana",30}
    };

    vector<pair<string,int>> sfruits = sortFruits(fruits, "price");

    for(auto s:sfruits){
        cout<<s.second<<endl;
    }
    return 0;
}