#include<bits/stdc++.h>

using namespace std;
class dog{
    private:
        int static stt;
        string name;
        int age;
        string species;
    public:
        // dog(string ht, int tuoi, string giong): name(ht), age(tuoi), species(giong) {

        // }
        // ~dog(){
        //     cout<<"end";
        // }
        void action();
        void input_data();
        void output_data();
        int tang_stt();
        int get_stt();
};
int dog::stt=0;
int dog::tang_stt(){
    ++stt;
    return stt;
}
int dog::get_stt(){
    return stt;
}
void dog::input_data(){
    stt++;
    cout<<"nhap ten chu cho: ";
    getline(cin,name);
    cout<<"nhap tuoi chu cho: ";
    cin>>age;
    cin.ignore();
    cout<<"nhap giong loai chu cho: ";
    getline(cin,species);
}
void dog::output_data(){
    cout<<"stt:"<<stt<<endl;
    cout<<"name: "<<name<<", age: "<<age<<", species: "<<species;
}
void dog::action(){
    cout<<endl;
    cout<<"go go!!"<<endl;
}
int main() {
    dog dog1;
    dog1.input_data();
    dog1.output_data();
    dog1.action();
    dog dog2;
    dog2.input_data();
    dog2.output_data();
    dog2.action();
    return 0;
}