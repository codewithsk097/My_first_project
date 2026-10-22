#include <iostream>
using namespace std;

class test {
private:
    int a;

public:
    test() {
        a = 50;
    }

    friend void display(test t);
};

void display(test t) {
    cout << "Value of a: " << t.a;
}

int main() {
    test t;
    display(t);
    return 0;
}
