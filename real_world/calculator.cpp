#include <iostream>
using namespace std;

float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

int main()
{
    char option;
    float num1, num2, result=0.0f;
    cout<<"Enter [number 1] [+ - * /] [number 2]\n";
    cin>>num1>>option>>num2;
    switch(option)
    {
        case '+': 
            result = add(num1, num2);
            break;

        case '-': 
            result = sub(num1, num2);
            break;

        case '*': 
            result = mult(num1, num2);
            break;

        case '/': 
            result = div(num1, num2);
            break;

        default: 
            cout<<"Invalid operator";
    }

    cout<<num1<<option<<num2<<"="<<result<<endl;

    return 0;
}


float add(float num1, float num2)
{
    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}

float mult(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2)
{
    return num1 / num2;
}