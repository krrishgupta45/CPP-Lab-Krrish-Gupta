#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    double area(); 
};

double Rectangle::area() {
    return length * width;
}

int main() {

    Rectangle rect;

    rect.length = 10.5;
    rect.width = 5.2;

    cout << "Area of the rectangle: " << rect.area() << endl;

    return 0;
}
