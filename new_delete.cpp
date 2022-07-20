#include <iostream>
using namespace std;

int main(){
    int* a;
    a = new int;
    *a = 124;
    cout<<*a<<endl;
    delete a;
    cout<<*a<<endl;

}