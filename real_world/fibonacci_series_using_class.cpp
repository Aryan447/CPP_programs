#include <iostream>
using namespace std;

class fibonacci{
    public:
    fibonacci()
    {
        int range;
        int a = 0, b = 1, c;
        cout << "Enter range: ";
        cin >> range;
        cout << "The series is:\n";
        while (a <= range)
        {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
        cout << "\n";
    }
};

int main(){
    fibonacci();
    return 0;
}