// #include<bits/stdc++.h>

// using namespace std;
// class vehicle{
//     private:
//         float speed;
//         float ingre;
//     public:
//         float max_speed();
//         float capacity();
// };
// float vehicle::max_speed(){
//     cout<<"Enter Speed: ";
//     cin>>speed;    
//     if(speed>60){
//         cout<<"max speed"<<endl;
//     }
//     else{
//         cout<<"avg speed"<<endl;
//     }
//     return speed;
// }
// float vehicle:: capacity(){
//     cout<<"Enter Engine: ";
//     cin>>ingre;
//     cout<<ingre<<"\t";
//     if(ingre>5){
//         cout<<"Full"<<endl;
//     }
//     else if(ingre<5 && ingre>2){
//         cout<<"enough"<<endl;
//     }
//     else{
//         cout<<"Lack"<<endl;
//     }
//     return ingre;
// }
// class car:public vehicle{
//     private:
//         int seat;
//         string fuel_type;
//     public:
//         int seat_in();
//         string engine_type();
// };
// int car::seat_in(){
//     cout<<"Enter Seat: ";
//     cin>>seat;
//         if(seat==2){
//             cout<<"Sport Car"<<endl;
//             } 
//         else if(seat==4){
//             cout<<"Family Car"<<endl;
//             } 
//         else if(seat>7 && seat<52 ){
//                 cout<<"Service Car"<<endl;
//             }
//         else{ 
//             cout<<"gia tri nhap khong hop le"<<endl;  
//     }
//     return seat;
// }
// string car::engine_type(){
//     cout<<"Enter Fuel Type: ";
//     cin>>fuel_type;
//     cout<<"Fuel: "<<fuel_type<<endl;
//     return fuel_type;
// }
// class bike: public vehicle{
//     private:
//         bool G;
//         string type;
//     public:
//         string type_bike();
//         bool gear();
// };
// string bike::type_bike(){
//     cout<<"Enter Bike Type: ";
//     cin>>type;
//     cout<<"Bike: "<<type<<endl;
//     return type;
// }
// bool bike::gear(){
//     G=true;
//     cout<<G;
//     return G;
// }
// int main(){
//     cout<<"Class Base"<<endl;
//     vehicle *toyota = new vehicle;
//     toyota->max_speed();
//     toyota->capacity();

//     cout<<"Class Derived 1(car)"<<endl;
//     car *lambor= new car;
//     lambor->max_speed();
//     lambor->capacity();
//     lambor->seat_in();
//     lambor->engine_type();

//     cout<<"Class Derived 2(bike)"<<endl;
//     bike *hiking= new bike;
//     hiking->max_speed();
//     hiking->capacity();
//     hiking->gear();
//     hiking->type_bike();

//     delete toyota, lambor, hiking;
// }
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    float maxSpeed;
    float engineCapacity;

public:
    Vehicle(float speed, float capacity) : maxSpeed(speed), engineCapacity(capacity) {}

    virtual void displayInfo() {
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Engine Capacity: " << engineCapacity << " liters" << endl;
    }
};

class Car : public Vehicle {
private:
    int numSeats;
    string fuelType;

public:
    Car(float speed, float capacity, int seats, string fuel)
        : Vehicle(speed, capacity), numSeats(seats), fuelType(fuel) {}

    void displayInfo() override {
        Vehicle::displayInfo();
        cout << "Number of Seats: " << numSeats << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Bike : public Vehicle {
private:
    string bikeType;
    bool hasGear;

public:
    Bike(float speed, float capacity, string type, bool gear)
        : Vehicle(speed, capacity), bikeType(type), hasGear(gear) {}

    void displayInfo() override {
        Vehicle::displayInfo();
        cout << "Bike Type: " << bikeType << endl;
        cout << "Has Gear: " << (hasGear ? "Yes" : "No") << endl;
    }
};

int main() {
    Vehicle baseVehicle(100, 2.0);
    Car myCar(180, 2.5, 5, "Gasoline");
    Bike myBike(30, 0.15, "Mountain", true);

    cout << "Base Vehicle Information:" << endl;
    baseVehicle.displayInfo();

    cout << "\nMy Car Information:" << endl;
    myCar.displayInfo();

    cout << "\nMy Bike Information:" << endl;
    myBike.displayInfo();

    return 0;
}
