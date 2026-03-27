#include <iostream>
using namespace std;

class Box {
private:
    float length;

public:
    Box(float l) {
        length = l;
    }

    friend float findLength(Box b);
};

float findLength(Box b) {
    return b.length;
}

int main() {
    Box b1(10.5);
    cout << "Length of box : " " " << findLength(b1);
    return 0;
}
