#include <iostream>
using namespace std;

int main(){
    int num, original_num, remainder, result;
    result = 9;
    cout<<"Enter number: ";
    cin>>num;
    original_num = num;

    while (original_num != 0){
        remainder = original_num % 10;
        result = remainder * remainder * remainder;
        original_num /= 10;
    }
    if (result == num)
    cout<<num<<" is a Armstrong number"<<endl;
    else
    cout<<num<<" is not a Armstrong number"<<endl;

    return 0;
}