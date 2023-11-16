#include<bits/stdc++.h>
#include<string>
using namespace std;
class student{
    protected:
        string name;
        int age;
        string ID;
        float gpa;
    public:
        // student(string ht,int tuoi, string id, float diem):name(ht),age(tuoi),ID(id),gpa(diem){
            
        // }
        virtual void in_data(int n);
        string getName()const{
            return name;
        }
        string getID(){
            return ID;
        }
        int getAge(){
            return age;
        }
        float getGPA(){
            return gpa;
        }
};
void student::in_data(int n){
    vector<student> students(n);
    for(int i=0;i<n;i++){
        cout << "Nhap thong tin student " << "(" << i + 1 << ")" << endl;
        cout << "Enter name Student: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Enter Age Student: ";
        cin >> students[i].age;
        cout << "Enter ID Student: ";
        cin.ignore();
        getline(cin, students[i].ID);
        cout << "Enter GPA Student: ";
        cin >> students[i].gpa;
    }
}
class Undergraduate_Student:public student{
    private:
        string major;
    public:
        void in_data(int n) override{
            student::in_data(n);
            cout<<"Enter Major Student: ";
            getline(cin, major);
        }
        string getMajor(){
            return major;
        }
};
class GraduateStudent:public student{
    private:
        string special;
    public:
        void in_data(int n) override{
            student::in_data(n);
            cout<<"Enter Speacial After: ";
            getline(cin,special);
        }
        string getGraduated(){
            return special;
        }
};
class managerStudent{
    private:
        
    public:
        vector<student*>student_vt;
        void display_data();
        student* add_student(student *student_add, int n);
        void rm_student(string &input_id);
        student *find_student(string &input_id);
};
void managerStudent::display_data(){
    for(const auto &student_copy: student_vt){
        cout<<"Name: "<<student_copy->getName()<<endl;
        cout<<"Age: "<<student_copy->getAge()<<endl;
        cout<<"ID: "<<student_copy->getID()<<endl;
        cout<<"GPA: "<<student_copy->getGPA()<<endl;
        cout<<"---------------------------------------"<<endl;
    }
}
student* managerStudent::find_student(string &input_id){
    cout << "Enter find student ID: ";
    getline(cin,input_id);
    // string input_id;
    // cin >> input_id;  
    for(const auto &student_copy: student_vt){
        if(student_copy->getID() == input_id){
            cout<<"Found student with Name: "<<student_copy->getName()<<"\t"<<"Found student with ID: "<<student_copy->getID()<<endl;
            return student_copy;
        }
    }
    cout << "Student with ID " << input_id << " not found." << endl;
    return nullptr;
}
student* managerStudent::add_student(student *new_student, int n){
cout<<"Add Student";
    for(int i=0;i<n;i++){
        new_student->in_data(n);
        student_vt.push_back(new_student);
    }
}
void managerStudent::rm_student(string &input_id){
    cout << "Enter remove student: ";
    getline(cin,input_id);
    for(auto it = student_vt.begin(); it != student_vt.end();++it){
        if((*it)->getID()==input_id){
            cout<<"Remove Student with ID: "<<(*it)->getID()<<endl;
            delete *it;
            student_vt.erase(it);
            break;
        }
    }
}
int main(){
    int n;
    cout<<"Enter Number of Student: ";
    cin>>n;

    student *new_student= new student;
    managerStudent manager;
    new_student->in_data(n);

    manager.add_student(new_student,n);
    manager.display_data();
    
    string input_id;
    student *found_student= manager.find_student(input_id);
    if(found_student!=nullptr){
        manager.rm_student(input_id);
    }
    manager.display_data();

    return 0;
}