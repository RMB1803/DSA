#include<bits/stdc++.h>
using namespace std;

// MULTIPLE RECURSION CALLS

int fibonacci(int n) {
    if(n <= 1) return n;

    return fibonacci(n-1) + fibonacci(n-2);
}
// TC: O(2^n)

int main() {
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;
}