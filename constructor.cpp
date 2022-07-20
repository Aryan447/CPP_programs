#include <iostream>
using namespace std;

class MyClass{
    public:
    // constructor have same name as class
    MyClass(){
        cout<<"Hello from MyClass by constructor\n";
    }
};

int main(){
    MyClass();
    return 0;
}