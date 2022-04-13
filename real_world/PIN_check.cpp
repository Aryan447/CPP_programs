#include <iostream>
using namespace std;

int main(){
    int PIN;
    while(PIN != 1234){
    cout<<"\nEnter PIN: ";
    cin>>PIN;
        if (PIN == 1234){
        cout<<"PIN is correct"<<endl;
        }
        else{
        cout<<"Incorrect PIN"<<endl;
        }
    }
    return 0;
}