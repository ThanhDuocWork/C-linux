#include <bits/stdc++.h>

using namespace std;

struct data_rectangle {
    float *cd;
    float *cr;
};
void input_data(data_rectangle *rec){
    rec->cd=new float;
    rec->cr=new float;
    cout<<"nhap chieu dai (cd):";
    cin>>*rec->cd;
    cout<<"nhap chieu rong (cr):";
    cin>>*rec->cr;
    if(*rec->cd <=0 || *rec->cr <=0){
        cout<<"Chieu Dai va Chieu Rong phai la so duong!!"<<endl;
        input_data(rec);
    }
}
float tinh_cv(data_rectangle *rec){
    float cv;
    cv = (*rec->cd + *rec->cr)*2;
    return cv; 
}
float tinh_dt(data_rectangle *rec){
    float dt;
    dt=*rec->cd * *rec->cr;
    return dt;
}
void output_data(data_rectangle rec){
    cout<<"Chu vi cua hcn: "<<tinh_cv(&rec);
    cout<<"Dien tich cua hcn: "<<tinh_dt(&rec);
    delete rec.cd;
    delete rec.cr;
}
int main(){
    data_rectangle rec;
    input_data(&rec);
    tinh_cv(&rec);
    tinh_dt(&rec);
    output_data(rec);
    return 0;
}