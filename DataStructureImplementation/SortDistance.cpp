#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

double calDistance(pair<int,int> p){
    double d = sqrt((p.first*p.first)+(p.second*p.second));
    return d;
}

bool compareDist(pair<int,int> p1,pair<int,int> p2){
    return calDistance(p1) < calDistance(p2);
}
//sorting based on the distance from origin

vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    // your code  goes here
    sort(v.begin(),v.end(),compareDist);
    return v;
    
    
}

int main(){
    vector<pair<int,int>> cabs = {
        {2,3},
        {1,2},
        {3,4},
        {2,4},
        {1,4}
    };

    vector<pair<int,int>> scabs = sortCabs(cabs);

    for(pair<int,int> a : scabs){

        cout<<a.first<<","<<a.second<<endl;
    }
    return 0;
}