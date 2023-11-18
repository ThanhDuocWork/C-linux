#include<bits/stdc++.h>
#include<string>
using namespace std;
class student {
protected:
    string name;
    int age;
    string ID;
    float gpa;

public:
    virtual void in_data(int n);
    string getName() const { return name; }
    string getID() const { return ID; }
    int getAge() const { return age; }
    float getGPA() const { return gpa; }
};

void student::in_data(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin student " << "(" << i + 1 << ")" << endl;
        cout << "Enter name Student: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age Student: ";
        cin >> age;
        cout << "Enter ID Student: ";
        cin.ignore();
        getline(cin, ID);
        cout << "Enter GPA Student: ";
        cin >> gpa;
    }
}

class Undergraduate_Student : public student {
private:
    string major;

public:
    void in_data(int n) override {
        student::in_data(n);
        cout << "Enter Major Student: ";
        getline(cin, major);
    }

    string getMajor() { return major; }
};

class GraduateStudent : public student {
private:
    string special;

public:
    void in_data(int n) override {
        student::in_data(n);
        cout << "Enter Specialization: ";
        getline(cin, special);
    }

    string getSpecialization() { return special; }
};

class managerStudent {
private:
public:
    vector<student> student_vt;

    void display_data();
    student* add_student(int n);
    void rm_student(string &input_id);
    student* find_student(string &input_id);
    void select(student *new_student);
};

void managerStudent::display_data() {
    for (const auto &student_copy : student_vt) {
        cout << "Name: " << student_copy.getName() << endl;
        cout << "Age: " << student_copy.getAge() << endl;
        cout << "ID: " << student_copy.getID() << endl;
        cout << "GPA: " << student_copy.getGPA() << endl;
        cout << "---------------------------------------" << endl;
    }
}

student* managerStudent::find_student(string &input_id) {
    cout << "Enter find student ID: ";
    cin.ignore();
    getline(cin, input_id);

    for (auto &student_copy : student_vt) {
        if (student_copy.getID() == input_id) {
            cout << "Found student with Name: " << student_copy.getName() << "\t"
                 << "Found student with ID: " << student_copy.getID() << endl;
            return &student_copy;
        }
    }

    cout << "Student with ID " << input_id << " not found." << endl;
    return nullptr;
}

student* managerStudent::add_student(int n) {
    cout << "Add Student" << endl;
    //student *new_student= new student;
    //new_student->in_data(n);
    for(int i=0;i<n;i++){
        student *new_student= new student;
        new_student->in_data(1);
        student_vt.push_back(*new_student);
        delete new_student; 
    }
    return nullptr;
//    return new_student;
}

void managerStudent::rm_student(string &input_id) {
    cout << "Enter remove ID student: ";
    getline(cin, input_id);

    auto it = find_if(student_vt.begin(), student_vt.end(),[&input_id](const student &s) { 
        return s.getID() == input_id; 
        });
    if (it != student_vt.end()) {
        cout << "Remove Student with ID: " << it->getID() << endl;
        student_vt.erase(it);
    } else {
        cout << "Student with ID " << input_id << " not found." << endl;
    }
}

void managerStudent::select(student *new_student) {
    while (1) {
        cout << "------------------------------" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Student" << endl;
        cout << "3. Find Student" << endl;
        cout << "4. Remove Student" << endl;
        cout << "------------------------------" << endl;

        int select;
        cin >> select;
        switch(select){
            case 1:{
                int n;
                cout << "Enter Number of Student: ";
                cin >> n;
                new_student = add_student(n);
                break;
            }
            case 2:{
                display_data();
                break;
            }
            case 3:{
                string input_id;
                student *found_student = find_student(input_id);
                // if(found_student!=nullptr){
                //     cout << "Found student. Displaying data..." << endl;
                //     display_data();                   
                // }
                break;
            }
            case 4:{
                string input_id;
                student* found_student = find_student(input_id);
                if (found_student != nullptr) {
                    rm_student(input_id);
                    cout << "Removed student. Displaying updated data..." << endl;
                    display_data();
                }
                break;
            }
            case 5:{
                return;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
}

int main() {
    int n;
    student *new_student = new student;
    managerStudent manager;
    manager.select(nullptr);
    string input_id;
    return 0;
}