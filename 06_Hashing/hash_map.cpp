#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> mpp;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // PRE_COMPUTE
    
    for(auto it: mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        // FETCH
        cout << "Number of times " << number << " appears: " << mpp[number] << endl;
    }
}