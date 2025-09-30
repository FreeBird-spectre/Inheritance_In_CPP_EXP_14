//Abir Seth
//EnTC A1
//PRN-24070123003

#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;  // Brand of the vehicle

    void showColour() {
        cout << "Colour: Red" << endl;
    }

    Vehicle() {
        brand = "Ford";
    }
};

class Car : public Vehicle {
public:
    string model;  

    void showSpeed() {
        cout << "Max speed: 200 km/h" << endl;
    }

    Car() {
        model = "Mustang";
    }
};

int main() {
    Car myCar;
    myCar.showColour();               
    cout << "Brand: " << myCar.brand << endl;   
    cout << "Model: " << myCar.model << endl;   
    myCar.showSpeed();              
    return 0;
}

Colour: Red
Brand: Ford
Model: Mustang
Max speed: 200 km/h


=== Code Execution Successful ===
