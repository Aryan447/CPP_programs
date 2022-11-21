#include<iostream>
using namespace std;

void swap(int* x, int* y) {
    int c;
    c = *x;
    *x = *y;
    *y = c;
}
int main(){
    int n, i, j, k;
    cout << "Enter the size of the array: "; 
    cin >> n;
    int a[n];
    cout << "Enter elements of the array: ";
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "Sorted array is : "; 
    for (i = 0;i < n;i++) {
    int min = i; for (j = i + 1;j < n;j++) {
        if (a[j] < a[min]) {
            min = j;
        }
        if (min != i) {
            swap(&a[i], &a[min]);
        }
        }
    }
    for (i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
    return 0;
}
