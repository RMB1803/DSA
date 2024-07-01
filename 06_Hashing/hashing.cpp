#include<bits/stdc++.h>
using namespace std;

/*Globally, max int array size we can declare is 10^7*/

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // PRE_COMPUTATION
    /*Inside main, the max size integer array we can declare is 10^6*/
    int hash[13] = {0};
    /*
    Hash array size is declared according to the max value 
    of an element in an array.
    */
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int queries;
    cout << "Enter number of queries: ";
    cin >> queries;

    while(queries--) {
        int number;
        cin >> number;
        // FETCHING
        cout << "Number of times " << number << " appears: " << hash[number] << endl;
    }
}