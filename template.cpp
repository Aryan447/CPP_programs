#include<iostream>
using namespace std;
template<class swap>

void swapp(swap& i, swap& j) {
    swap t;
    t = i;
    i = j;
    j = t;
}

int main() {
    int e, f;
    char g, r;
    float x, y;

    cout << "\nPlease insert 2 Integer Values:"; cin >> e >> f;
    swapp(e, f);
    cout << "\nInteger values after Swapping:";
    cout << e << " " << f << "\n";

    cout << "\nPlease insert 2 Character Values:"; cin >> g >> r;
    swapp(g, r);
    cout << "\nCharacter Values after Swapping:";
    cout << g << " " << r << "\n";

    cout << "\nPlease insert 2 Float Values:"; cin >> x >> y;
    swapp(x, y);
    cout << "\nThe resultatnt float values after swapping:";
    cout << x << " " << y << "\n";
}