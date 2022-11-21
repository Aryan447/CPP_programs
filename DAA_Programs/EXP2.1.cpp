#include<iostream>
using namespace std;

int main() {
    int n, i, y = 0, a[10] = { 1,11,5,8,3,5,2,9,6,7 };
    cout << "Enter the element you want to search";
    cin>>n;
    for (i = 0; i < 10; i++) {
        if (n == a[i]) {
                cout << "Element at position : " << i << endl;
                y = 1;
            }

        }
    if (y == 0) {
        cout << "Number not found";
    }
    
    return 0;
}