#include<bits/stdc++.h>
using namespace std;

class person{
    private:
        string name;
        int age;
    public:
        string get_name()const;
        void set_name(const string &newname);
        int get_age()const;
        void set_age(int newage);
};
string person:: get_name()const{
    return name;
}
void person::set_name(const string &newname){
    name=newname;
}
int person::get_age()const{
    return age;
}
void person::set_age(int newage){
    if(newage>0){
        age=newage;
    }
    else{
        cout<<"tuoi khong hop le!!"<<endl;
    }
}
int main(){
    person *ps=new person;
    string content("Thanh Duoc");
    ps->set_name(content);
    ps->set_age(23);

    cout<<"Name: "<<ps->get_name()<<endl;
    cout<<"Age: "<<ps->get_age()<<endl;

    person *ps2=new person;
    ps2->set_age(-5);
    ps2->set_name("Person2");
    cout<<"Name2: "<<ps2->get_name()<<endl;
    cout<<"Age2: "<<ps2->get_age()<<endl;

    delete ps,ps2;
    return 0;
}