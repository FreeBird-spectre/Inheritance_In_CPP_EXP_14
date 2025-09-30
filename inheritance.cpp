//Abir Seth
//EnTC A1
//PRN-24070123003

#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand = "Toyota";

    void showColor() {
        cout << "Color: Blue" << endl;
    }
};

class Car : public Vehicle {
public:
    string model = "Corolla";

    void showSpeed() {
        cout << "Speed: 180 km/h" << endl;
    }
};

int main() {
    Car myCar;
    
    cout << "Brand: " << myCar.brand << endl;
    myCar.showColor();

    cout << "Model: " << myCar.model << endl;
    myCar.showSpeed();

    return 0;
}

Brand: Toyota
Color: Blue
Model: Corolla
Speed: 180 km/h


=== Code Execution Successful ===
