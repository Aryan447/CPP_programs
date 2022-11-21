
#include<iostream>
using namespace std;

int main(){ 
    int i,j,n,b;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter elements of the array: ";
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Sorted array is : "; 
    for (i = 0; i < n; i++){
        for (j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]){
                b = a[j]; a[j] = a[j + 1]; 
                a[j + 1] = b;
            }
        }
    }
    for (i = 0; i < n; i++){
    cout << a[i] << " ";
    }
    
    return 0;
}