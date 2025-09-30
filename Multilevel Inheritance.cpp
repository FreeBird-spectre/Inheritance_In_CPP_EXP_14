//Abir Seth
//ENTC A1
//PRN-24070123003

#include <iostream>
using namespace std;

class College {
public:
    string collegeName = "Symbiosis Institue Of Technology";

    void showCollege() {
        cout << "College Name: " << collegeName << endl;
    }
};

class Department : public College {
public:
    string departmentName = "Electronics & Communication";

    void showDepartment() {
        cout << "Department: " << departmentName << endl;
    }
};

class Lab : public Department {
public:
    string labName = "DCLD Lab";

    void showLab() {
        cout << "Lab Name: " << labName << endl;
    }
};

int main() {
    
    Lab labInfo;

    labInfo.showCollege();     
    labInfo.showDepartment();  
    labInfo.showLab();         

    return 0;
}

College Name: Symbiosis Institue Of Technology
Department: Electronics & Communication
Lab Name: DCLD Lab


=== Code Execution Successful ===
