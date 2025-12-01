#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    int marks[5];
    int total;

    void input() {
        cout << "\nEnter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;

        total = 0;
        cout << "Enter 5 subject marks:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            total += marks[i];
        }
    }

        void display() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

        for (int i = 0; i < n; i++) {
        cout << "\n Enter details of Student " << i + 1 << " \n";
        s[i].input();
    }

    cout << "\n\nStudent Totals\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
    }
   
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].total > s[maxIndex].total)
            maxIndex = i;
    }

    cout << "\n\nStudent with Highest Total \n";
    s[maxIndex].display();

    return 0;
}
