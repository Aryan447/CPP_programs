#include <iostream>
using namespace std;

class MyClass{
    public:
    MyClass(){
        cout<<"Hello from MyClass by constructor\n";
    }
};

int main(){
    MyClass();
    return 0;
}