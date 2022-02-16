#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int ctotal(vector<int> s){

    return s[0] + s[1] + s[2];
}

bool compare(pair<string,vector<int>> s1,pair<string,vector<int>> s2){

    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;

    return ctotal(m1) > ctotal(m2);

}

int main(){

    vector<pair<string,vector<int>>> student_marks = {
        {"Ayush",{10,8,9}},
        {"Anand",{4,6,5}},
        {"Atul",{4,9,7}}
    };

    sort(student_marks.begin(),student_marks.end(),compare);
    for(auto s:student_marks){
        cout<<s.first<<" "<<ctotal(s.second)<<endl;
    }
    return 0;
}