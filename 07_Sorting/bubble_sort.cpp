#include<bits/stdc++.h>
using namespace std;

/*
PUSHES THE MAX VALUE TO THE LAST PLACE 
BY ADJACENT SWAPPING
*/

void bubble_sort(int arr[], int n) {
    for(int i = n-1; i >= 1; i--) {
        int didSwap = 0;
        for(int j = 0; j <= i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) {
            break;
        }
    }
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}