#include <iostream>
using namespace std;

class Complex {
public:
    int real, img;

    Complex(int r, int i) {
        real = r;
        img = i;
    }

    Complex operator + (Complex obj) {
        Complex temp(0, 0);
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;

    cout << c3.real << " + i" << c3.img;
    return 0;
}
