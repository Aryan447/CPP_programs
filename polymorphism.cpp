#include <iostream>
using namespace std;

class myClass {
    public:
    int sum(int a, int b, int c) {
        cout << "Using function with 3 arguments " << endl;
        return a + b + c;
    }
    int sum(int a, int b) {
        cout << "Using function with 2 arguments " << endl;
        return a + b;
    }
    int volume(double r, int h) {
        return (3.14 * r * r * h);
    }

    int volume(int a) {
        return a * a * a;
    }

    int volume(int l, int b, int h) {
        return l * b * h;
    }
};

int main() {
    myClass obj1;
    cout << "The volume of cuboid is " << obj1.volume(3, 7, 6) << endl;
    cout << "The volume of cylinder is " << obj1.volume(3, 7) << endl;
    cout << "The volume of cube is " << obj1.volume(3) << endl;

    return 0;
}