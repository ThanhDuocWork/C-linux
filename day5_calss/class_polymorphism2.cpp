#include<bits/stdc++.h>

using namespace std;

class Shape{
    private:
    
    public:
        virtual float tinh_cv();
        virtual float tinh_dt();
};
float Shape :: tinh_cv(){
    return 0.0;
}
float Shape :: tinh_dt(){
    return 0.0;
}
class Circle : public Shape{
    private:
        float cd;
        float cr;
        float cc;
        float result;
    public:
        Circle(float cd_cl,float cr_cl,float cc_cl):cd(cd_cl),cr(cr_cl),cc(cc_cl){

        }
        float tinh_cv() override;
        float tinh_dt() override;
};
float Circle:: tinh_cv(){
    result=(cd+cr)*cc;
    return result;
}
float Circle::tinh_dt(){
    result=cd*cc+cc;
    return result;
}
class rectangle:public Shape{
    private:
        float cd1;
        float cr1;
        float result;
    public:
        rectangle(float cd_rec,float cr_rec,float cc_rec):cd1(cd_rec),cr1(cr_rec){
            
        }
        float tinh_cv();
        float tinh_dt();
};
float rectangle :: tinh_cv(){
    result=(cd1-cr1);
    return result;
}
float rectangle::tinh_dt(){
    result=cd1*cr1;
    return result;
}
int main(){
    int numShape=2;
    Shape *shapes[numShape];
    shapes[0]=new Circle(1,2,3);
    shapes[1]=new rectangle(4,5,6);
    for(int i=0;i<numShape;i++){
        cout<<"cv: "<<shapes[i]->tinh_cv()<<endl;
        cout<<"dt: "<<shapes[i]->tinh_dt()<<endl;
    }
    for(int i=0;i<numShape;i++){
        delete shapes;
    }
    return 0;
}