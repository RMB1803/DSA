#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int arr[], int n) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);

    reverse(i+1, arr, n);
}

bool pallindrome(int i, string &s) {
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) {
        return false;
    }
    return pallindrome(i+1, s);
}

int main() {
    string s = "madam";

    cout << pallindrome(0, s) << endl;
}