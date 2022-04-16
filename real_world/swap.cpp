// Program to swap numbers using 3rd variable;
#include <iostream>
using namespace std;

int main(){
    int a, b, temp;
    a = 27;
    b = 46;
    cout<<"before swap: "<<a<<" "<<b;
    temp = a;
    a = b;
    b = temp;
    cout<<"\nafter swap: "<<a<<" "<<b<<endl;
    return 0;
}