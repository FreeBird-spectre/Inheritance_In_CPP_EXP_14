//Abir Seth
//Entc A1
//PRN-24070123003

#include <iostream>
using namespace std;

class Vehicle {
public:
    void showType() {
        cout << "This is a vehicle." << endl;
    }
};

class Equipment {
public:
    void showCategory() {
        cout << "This is an outdoor equipment." << endl;
    }
};


class MountainBike : public Vehicle, public Equipment {
public:
    void showDetails() {
        showType();        
        showCategory();   
        cout << "This is a mountain bike." << endl;
    }
};

int main() {
    MountainBike bike;

    bike.showDetails();

    return 0;
}

This is a vehicle.
This is an outdoor equipment.
This is a mountain bike.


=== Code Execution Successful ===
