#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    num1 = 10;
    num2 = 12;
    cout<<"Before swap: "<<num1<<" "<<num2<<endl;
    num2 = num2 - num1;
    num1 = num2 + num1;
    num2 = num1 - num2;
    cout<<"After swap: "<<num1<<" "<<num2<<endl;
}