#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
//stores data in key value pair
//one key can point to only one value
//returns elements in sorted order
/* Adds a value with key x and value y to the map*/
void add_value(map<int,int> &m,int x,int y)
{
    //Your code here
    m.insert({x,y});
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int,int> &m,int x)
{
  //Your code here
  if(m.find(x) != m.end()){
      return m[x];
  }
  else{
      return -1;
  }
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int,int> &m)
{
   //Your code here
   for(auto it = m.begin();it != m.end();it++){
       cout<<it->first<<" "<<it->second<<" ";
   }
}

int main()
{
    map<int,string> m;
    m[1] = "ayush";
    m[12] = "rainee";
    m[3] = "akhilesh";
    m.insert({24,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 12 "<<m.count(12)<<endl;
    auto it = m.find(12);

    for(auto i = m.begin();i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }
}