#include<bits/stdc++.h>

using namespace std;

class person{
    protected:
        string name;
        int age;
        string address;
    public:
        person(string ht, int tuoi, string dc):name(ht),age(tuoi),address(dc){

        }
        virtual void displayInfor();
};
void person::displayInfor(){
    cout<<"class base: Person"<<endl;
}
class employee:public person{
    protected:
        int id;
        double salary;
    public:
        employee(string ht, int tuoi, string dc, int id_ep,double sal):person(ht,tuoi,dc),id(id_ep),salary(sal){

        }
        void displayInfor() override;
};
void employee::displayInfor(){
    cout<<"Name: "<<name<<"\t"<<"Age: "<<age<<"\t"<<"Address: "<<address<<endl;
    cout<<"ID: "<<id<<"\t"<<"Salary: "<<salary<<endl;
}
class manager : public employee{
    private:
        string deparment;
    public:
        manager(string ht, int tuoi, string dc, int id_ep,double sal,string derpar):employee(ht,tuoi,dc,id_ep,sal),deparment(derpar){

        }
        void displayInfor() override;
};
void manager::displayInfor(){
    employee::displayInfor();
    cout<<"Department: "<<deparment<<endl;
}
class dev:public employee{
    private:
        string programLanguage;
    public:
        dev(string ht, int tuoi, string dc, int id_ep,double sal,string langua):employee(ht,tuoi,dc,id_ep,sal),programLanguage(langua){

        }
        void displayInfor() override;
};
void dev::displayInfor(){
    employee::displayInfor();
    cout<<"Program Langguage: "<<programLanguage<<endl;
}
int main(){
    int numEmployee=2;
    employee *employee_sl[numEmployee];

    manager manager_1("Thanh Duoc",23,"106a street 2",18161060,8.52,"embedded");
    dev dev_1("Bin",24,"26 acb street",18161061,7.82,"C/C++");
    employee_sl[0]=&manager_1;
    employee_sl[1]=&dev_1;
    for(int i=0;i<numEmployee;i++){
        employee_sl[i]->displayInfor();
        cout<<endl;
    }
    for(int i=0;i<numEmployee;i++){
        delete employee_sl[i];
    }

    return 0;
}