#include<iostream>
using namespace std;

int find(int a[], int n, int data) {
    int l = 0, r = n - 1, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (data == a[mid]) {
            return mid;
        }
        else if(data < a[mid]) {
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return - 1;
}

int main() {
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, i, j, k;
    cout << "Enter the element to be searched : ";
    cin >> k;
    int s = find(a, 10, k);
    if (s == -1) {
        cout << "Element not found ";
    }
    else
        cout << a[s] << " is present at : " << s+1; 
        return 0;
}