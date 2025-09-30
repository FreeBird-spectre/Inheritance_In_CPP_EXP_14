//Abir Seth
//PRN-24070123003
//ENTC A1

#include <iostream>
using namespace std;

class School {
public:
    string name = "K.B.C New English School";

    void showSchool() {
        cout << "School: " << name << endl;
    }
};

class Teacher : public School {
public:
    string subject = "Mathematics";

    void showTeacher() {
        cout << "Teaches: " << subject << endl;
    }
};

class Student : public School {
public:
    string grade = "10th Grade";

    void showStudent() {
        cout << "Grade: " << grade << endl;
    }
};

class Staff : public School {
public:
    string role = "Librarian";

    void showStaff() {
        cout << "Role: " << role << endl;
    }
};

int main() {
    Teacher t;
    Student s;
    Staff st;

    cout << "Teacher Info:" << endl;
    t.showSchool();
    t.showTeacher();

    cout << "\nStudent Info:" << endl;
    s.showSchool();
    s.showStudent();

    cout << "\nStaff Info:" << endl;
    st.showSchool();
    st.showStaff();

    return 0;
}

Teacher Info:
School: K.B.C New English School
Teaches: Mathematics

Student Info:
School: K.B.C New English School
Grade: 10th Grade

Staff Info:
School: K.B.C New English School
Role: Librarian


=== Code Execution Successful ===
