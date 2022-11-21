#include<iostream>
using namespace std;

void display (int arr[], int n){ 
    for (int i = 0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

int partition(int a[], int lo, int hi){
    int pivot = a[lo];
    int start = lo + 1; int end = hi;
    do{
        while (a[start] <= pivot){
            start++;
    }
    while (a[end] > pivot){
    end--;
    }
    if (start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
    }
    } 
    while (start < end); 
    int temp = a[lo];
    a[lo] = a[end];
    a[end] = temp; 
    return end;
}

void quickSort(int a[], int lo, int hi){ 
    if (lo<hi){ 
        int p_index = partition(a, lo, hi);
        quickSort(a, lo, p_index-1);
        quickSort(a, p_index + 1, hi);
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements: "; cin>> n;
    int arr[n];
    cout<<"Enter the elements: "; for (int i = 0; i< n; i++){
        cin>>arr[i];
    }
    display(arr, n); quickSort(arr, 0, n - 1); display(arr, n);

    return 0;
}
