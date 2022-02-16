#include<iostream>
#include<fstream>
#include<map>
using namespace std;

class SingletonDatabase{

    map<string, string> directory;

    SingletonDatabase()
    {
        cout<<"initializing database\n";
        ifstream ifs("phone.txt");

        string name,number;

        while (getline(ifs, name))
        {
            getline(ifs, number);
            string temp_no = number;
            directory[name] = temp_no;

        }
    }

    public:
    SingletonDatabase(SingletonDatabase const&) = delete;
    void operator=(SingletonDatabase const&) = delete;

    static SingletonDatabase& getobj()
    {
        static SingletonDatabase db;
        return db;
    }
    
    string get_number(const string &name){

        return directory[name];

    }
    void set_number(const string &name){

        directory[name] = "0000";

    }
};

int main(){

    SingletonDatabase &obj = SingletonDatabase::getobj();
    obj.set_number("AYUSH");
    SingletonDatabase &obj1 = SingletonDatabase::getobj();
    cout<<obj.get_number("AYUSH")<<endl;
    cout<<obj1.get_number("AYUSH")<<endl;
}