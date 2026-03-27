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
    info.name = "Stuti";
    info.enroll = "ADT25SOCB1350";
    info.dept = "SOC FY";
    info.mno = "7666332001";
    cout << "info" << endl;
    info.displayInfo();

    return 0;
}
