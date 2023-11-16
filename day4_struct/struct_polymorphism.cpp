#include<bits/stdc++.h>
using namespace std;
struct student{
    string name;
    string class_name;
    float score;
    student(string ht, string lop, float score_cl): name(ht),class_name(lop), score(score_cl) {

    }
    virtual void student1();
};
struct student_hight:public student{
    student_hight(string ht, string lop, float score_cl): student(ht,lop,score_cl) {

    }
    void student1() override;
};
struct student_low:public student{
    student_low(string ht, string lop, float score_cl): student(ht,lop,score_cl) {

    }
    void student1() override;
};
void student::student1(){
    cout<<"class base!!"<<endl;
}
void student_hight::student1(){
    cout<<"class base_1"<<endl;
}
void student_low:: student1(){
    cout<<"class base_2"<<endl;
}
int main(){
    student *sv[3]={
        new student("class base","1861cl2a",2.77),
        new student_hight("class base_1","18162cl2b",3.55),
        new student_low("_class base_2","18163cl3c",17.7),
    };
    student *ptr;
    for(int i=0;i<3;i++){
        ptr=sv[i];
        sv[i]->student1();
    }
    for(int i=0;i<3;i++){
        delete sv[i];
    }
//    student *st=new student_hight;  dang co constructor
    return 0;
}