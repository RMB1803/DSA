#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 52;
    int b = 10;

    while(a > 0 && b > 0) {
        if(a > b) a = a%b;
        if(b > a) b = b%a;
    }
    if(a == 0) {
        cout << "GCD is " << b;
    }
    else cout << "GCD is " << a;

    return 0;
}