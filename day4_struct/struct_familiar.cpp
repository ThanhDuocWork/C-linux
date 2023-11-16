#include<bits/stdc++.h>
using namespace std;
struct data_hs
{
    char name[100];
    char lop[100];
    char gpa[100];
    int age;
};
data_hs input_data(data_hs &student){
//    data_hs student;
    cout<<"Ho Va Ten: ";
    cin.getline(student.name,100);
    cout<<"Lop hoc: ";
    cin>>student.lop;
    cin.ignore();
    cout<<"Diem dat duoc: ";
    cin.getline(student.gpa,100);
    cout<<"Tuoi:";
    cin>>student.age;
}
void output_data(data_hs student){
//    data_hs student;
    cout<<"Ho Va Ten: "<<student.name<<", Lop hoc: "<<student.lop<<", Diem dat duoc: "<<student.gpa<<", Tuoi: "<<student.age;

}
int main(){
    data_hs student;
    input_data(student);
    output_data(student);
    return 0;
}

