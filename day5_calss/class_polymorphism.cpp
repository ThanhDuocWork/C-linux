#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        int static stt;
        string name;
        string class_name;
        float score;
    public:
        void input_data();
        void output_data();
        virtual void comment();
};
class Student_hight: public Student{
    private:
        int task1;
    public:
        int tastp1;
        void comment() override;
};
class Student_low: public Student{
    private:
        int task2;
    public:
        void comment() override;
};
void Student::comment(){
    cout<<"Class base!!"<<endl;
}
void Student_hight::comment(){
    cout<<"Class base2!!"<<endl;
}
void Student_low::comment(){
    cout<<"Class base3!!"<<endl;
}
void Student::input_data(){
    cout<<"Nhap ho va ten: ";
    getline(cin,name);
    cout<<"Nhap lop hoc: ";
    getline(cin,class_name);
    cout<<"Nhap diem: ";
    cin>>score;
}
void Student::output_data(){
    cout<<name<<"\t"<<class_name<<"\t"<<score<<endl;
}
int main(){
    Student *sv1=new Student;
    Student *sv2=new Student_hight;
    Student *sv3=new Student_low;
    Student_hight *sv4=new Student_hight;
    sv1->input_data();
    sv1->output_data();
    sv1->comment();

    sv2->comment();
    sv3->comment();

    sv4->tastp1;

    delete sv1;
    return 0;
}