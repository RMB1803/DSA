#include<bits/stdc++.h>
using namespace std;

//Pair datatype
void explainPair() {
    pair<int, int> P = {1,7};
    cout << P.first << " " << P.second << endl;

    //three values
    pair<int, pair<int, int>> p = {2, {3, 9}};
    cout << p.first << " " << p.second.first << " " << p.second.second << endl;

    //pair of values in an array
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 9}};
    cout << arr[1].second;
}

int main() {
    explainPair();
}