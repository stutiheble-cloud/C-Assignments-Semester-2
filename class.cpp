#include <iostream>
using namespace std;

class FYsoc {
public:
    string name;
    string enroll;
    string dept;
    string mno;
    
    void displayInfo() {
        cout << "Name :" << name << endl;
        cout << "Enrollment no :" << enroll << endl;
        cout << "Department :" << dept << endl;
        cout << "Mobile number :" << mno << endl;
    }
};

int main() {
    FYsoc info;
    info.name = "Om";
    info.enroll = "ADT25SOCB0724";
    info.dept = "SOC FY";
    info.mno = "9172460997";
    cout << "info" << endl;
    info.displayInfo();

    return 0;
}
