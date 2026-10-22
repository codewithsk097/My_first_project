#include <iostream>
using namespace std;

class Sum {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Sum s;
    cout << s.add(2, 3) << endl;
    cout << s.add(2,9,89);
    return 0;
}
