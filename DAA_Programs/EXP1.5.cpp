#include<iostream>
using namespace std;

void display(int arr[], int n) {
    for (int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeSort(int a[], int mid, int low, int high) {
    int i, j, k, b[100];
    i = low; j = mid + 1; k = low;
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k] = a[i]; i++;
            k++;
        }
        else {
            b[k] = a[j]; k++;
            j++;
        }
    }
    while (i <= mid) {
        b[k] = a[i]; k++;
        i++;
    }
    while (j <= high) {
        b[k] = a[j]; k++;
        j++;
    }
    for (int m = low;m <= high;m++) {
        a[m] = b[m];
    }
}

void MS(int a[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2; MS(a, low, mid); MS(a, mid + 1, high); mergeSort(a, mid, low, high);
    }
}
int main() {
    int n;
    cout << "Enter the size of arr: "; cin >> n;
    int arr[n];
    cout << "Enter the elements: "; for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    MS(arr, 0, n - 1);
    display(arr, n); return 0;
}