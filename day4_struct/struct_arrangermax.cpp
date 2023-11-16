#include<bits/stdc++.h>

using namespace std;
struct data_sinhvien{
    string *name;
    string *class_sv;
    float *score;
};
void input_data(data_sinhvien *student,int n){
    for(int i=0;i<n;i++){
        student[i].name = new string;
        student[i].class_sv= new string;
        student[i].score = new float;
        cout<<"nhap thong tinh student "<<"("<<i+1<<")"<<endl;
        cin.ignore();
        cout<<"Ho va Ten: ";
        getline(cin,*(student[i].name));
        cout<<"Lop: ";
        getline(cin,*student[i].class_sv);
        cout<<"Diem: ";
        cin>>*student[i].score;
    }
}
void output_data(data_sinhvien *student, int n){
    for(int i=0; i<n;i++){
        cout<<"Ho va Ten: "<<*student[i].name<<endl;
        cout<<"Lop: "<<*student[i].class_sv<<endl;
        cout<<"Diem: "<<*student[i].score<<endl;
    }
}
float arranger_data(data_sinhvien *student, int n){
    for(int i=0;i<n;i++){
        int max_index = i;
        for(int j=i+1;j<n;j++){
            if( *student[j].score  < *student[max_index].score){
                max_index = j;
            }
        }
        if(max_index =! i){
            float temp = *student[i].score;
            *student[i].score=*student[max_index].score;
            *student[max_index].score=temp;        
        }
    }
    output_data(student,n);
}
int main(){
    int n;
    cout<<"nhap so luong sinh vien: ";
    cin>>n;
    data_sinhvien *student = new data_sinhvien[n];
    input_data(student,n);
//    output_data(student,n);
    cout<<"sinh vien co so diem tang dan la: "<<endl;
    arranger_data(student,n);
    for(int i=0;i<n;i++){
        delete student[i].name;
        delete student[i].class_sv;
        delete student[i].score;
    }
    delete []student;
    return 0;
}