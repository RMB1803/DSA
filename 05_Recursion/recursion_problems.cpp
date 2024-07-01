#include<bits/stdc++.h>
using namespace std;

// Printing something N times.

// void my_name(int i, int n) {
//     if(i > n) return;

//     cout << "Ram" << endl;
//     my_name(i+1, n);
// }

// int main() {
//     int n;
//     cin >> n;

//     my_name(1, n);
// }

// Print linearly from 1 to N.

// void numbers(int i, int n) {
//     if(i > n) return;

//     cout << i << endl;
//     numbers(i+1, n);
// }

// int main() {
//     int n;
//     cin >> n;

//     numbers(1, n);
// }

// Print linearly from n to 1.

// void numbers(int i, int n) {
//     if(i < 1) return;

//     cout << n << endl;
//     numbers(i-1, n);
// }

// int main() {
//     int n;
//     cin >> n;

//     numbers(n, n);
// }

// Backtracking for 1 to n

// void numbers(int i, int n) {
//     if(i < 1) return;

//     numbers(i-1, n);
//     cout << i << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     numbers(n, n);
// }

// Backtracking for n to 1

void numbers(int i, int n) {
    if(i > n) return;

    numbers(i+1, n);
    cout << i << endl;
}

int main() {
    int n;
    cin >> n;

    numbers(1, n);
}