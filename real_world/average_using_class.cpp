#include <iostream>
using namespace std;

class average{
    public:
    average(){
        int num1, num2, num3, num4, num5;
        cout<<"Enter 5 numbers: ";
        cin>>num1>>num2>>num3>>num4>>num5;
        cout<<"Average of 5 numbers is: "<<(num1+num2+num3+num4+num5)/5<<endl;
    }
};

int main(){
    average();
    return 0;
}