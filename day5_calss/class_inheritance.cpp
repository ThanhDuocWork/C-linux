#include<bits/stdc++.h>
using namespace std;

class Student{
    protected:
        int static stt;
        string name;
        string class_name;
        float score;
        bool graduated_bool;
    public:
        // Student(string name_st, string class_st, int score_st):name(name_st),class_name(class_st),score(score_st){

        // }
        void input_data();
        void output_data();
        void graduated();
        void fail();
};
class Student_hight : public Student {
        private:

        public:
        //     Student_hight(string name_st, string class_st, int score_st):Student(name_st,class_name,score_st){

        // }
            string compliment();
            
    //     void input_data(){
    //         cout<<"Nhap ho va ten sinh vien: ";
    //         getline(cin,name);
    //         cout<<"Nhap lop sinh vien: ";
    //         getline(cin,class_name);
    //         cout<<"Nhap diem sinh vien: ";
    //         cin>>score;
    //         cin.ignore();
    // }
    //     void output_data(){
    //         cout<<name<< "\t" <<class_name<< "\t"<<score<<endl;
    // }
};
class Student_low : public Student{
        private:

        public:
        //     Student_low(string name_st, string class_st, int score_st):Student(name_st,class_name,score_st){

        // }
            string review();
    //         void input_data(){
    //             cout<<"Nhap ho va ten sinh vien: ";
    //             getline(cin,name);
    //             cout<<"Nhap lop sinh vien: ";
    //             getline(cin,class_name);
    //             cout<<"Nhap diem sinh vien: ";
    //             cin>>score;
    //             cin.ignore();
    // }
    //         void output_data(){
    //             cout<<name<< "\t" <<class_name<< "\t"<<score<<endl;
    // }
};
string Student_low::review(){
    return "review yourself";
}
string Student_hight::compliment(){
    return "wonderful!!";
}
void Student::input_data(){
    cout<<"Nhap ho va ten sinh vien: ";
    getline(cin,name);
    cout<<"Nhap lop sinh vien: ";
    getline(cin,class_name);
    cout<<"Nhap diem sinh vien: ";
    cin>>score;
    cin.ignore();
}
void Student::output_data(){
    cout<<name<< "\t" <<class_name<< "\t"<<score<<endl;
}
void Student::graduated(){
    if(score >= 2.5){
        cout<<"graduated: "<<name<<endl;
    }
}
void Student::fail(){
    if(score <2.5){
        cout<<"fail: "<<name<<endl;
    }
}
int main(){
    // Student *sv1= new Student("Thanh Duoc","18161CL2A",2.88);
    Student *sv1=new Student;
    sv1->input_data();
    sv1->output_data();
    sv1->graduated();
    sv1->fail();
    
    // Student_hight *sv2 = new Student_hight("Hight Student","18161CL3A",3.44);
    Student_hight *sv2=new Student_hight;
    sv2->input_data();
    sv2->output_data();
    sv2->graduated();
    sv2->fail();
    sv2->compliment();

    // Student_low *sv3 = new Student_low("Low Student","18161CL4A",1.44);
    Student_low *sv3=new Student_low; 
    sv3->input_data();
    sv3->output_data();
    sv3->graduated();
    sv3->fail();
    sv3->review();

    delete sv1;
    delete sv2;
    delete sv3;
    return 0;
}
