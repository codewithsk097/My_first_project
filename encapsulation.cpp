#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int m) {   // same name allowed
        marks = m;
    }

    int getMarks() {
        return marks;
    }
};

int main() {
    Student s;

    s.setMarks(75);        // setter call
    cout << s.getMarks();  // getter call

    return 0;
}
