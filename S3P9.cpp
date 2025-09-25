#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time addTime(Time t) {
        int totalMinutes = minutes + t.minutes;
        int totalHours = hours + t.hours + (totalMinutes / 60);
        totalMinutes = totalMinutes % 60;

        return Time(totalHours, totalMinutes);
    }

    void display() {
        cout << hours << " hour(s) and " << minutes << " minute(s)" << endl;
    }
};

int main() {
    Time t1(1, 45); 
    Time t2(2, 30); 

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    Time total = t1.addTime(t2);
    cout << "Total Time after addition: ";
    total.display();

    return 0;
}
