#include<iostream>
using namespace std;

int main(){
    int a[10] = { 1,11,5,8,3,5,2,9,6,7 }, temp, j;
    for (int i = 0; i < 10; i++) {
        temp = a[i];
        j = i - 1; 
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j]; j--;
        }
        a[j + 1] = temp;
    }
    cout << "Sorted array is : "; for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
