#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    float price;
public:
    Car(string b, float p) {
        brand = b;
        price = p;
    }
    Car(const Car &c) {
        brand = c.brand;
        price = c.price;
        cout << "Copy constructor called!" << endl;
    }
    void display() {
        cout << "Brand: " << brand << ", Price: $" << price << endl;
    }
};

int main() {
    Car car1("Alto", 25000.0);
    cout << "Original car details:" << endl;
    car1.display();

    Car car2 = car1;
    cout << "Copied car details:" << endl;
    car2.display();

    return 0;
}
