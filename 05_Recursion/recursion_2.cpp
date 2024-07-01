#include<bits/stdc++.h>
using namespace std;

// PARAMETERISED RECURSION

// Sum of first N numbers.
void sum1(int i, int sum = 0) {
    if(i < 1) {
        cout << "Sum is: " << sum << endl;
        return;
    }

    sum1(i-1, sum+i);
}

// Factorial of N.
void factorial1(int i, int product = 1) {
    if(i < 1) {
        cout << "Factorial is: " << product << endl;
        return;
    }

    factorial1(i-1, product*i);
}


// FUNCTIONAL RECURSION

// Sum of first N numbers.
int sum2(int n) {
    if(n == 0) return 0;

    return n + sum2(n-1);
}

// Factorial of N.
int factorial2(int n) {
    if(n == 1) return 1;

    return n * factorial2(n-1);
}


int main() {
    int n;
    cin >> n;

    factorial1(n);
}