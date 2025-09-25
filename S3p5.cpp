#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    Circle() {
        radius = 1;
    }

    Circle(float r) {
        radius = r;
    }

    void area() {
        float a = 3.14159 * radius * radius;
        cout << "Radius: " << radius << ", Area: " << a << endl;
    }
};

int main() {
    Circle c1;
    cout << "Circle created using default constructor:" << endl;
    c1.area();

    float r;
    cout << "\nEnter radius for the second circle: ";
    cin >> r;

    Circle c2(r);
    cout << "Circle created using parameterized constructor:" << endl;
    c2.area();

    return 0;
}
