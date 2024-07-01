#include<bits/stdc++.h>
using namespace std;

//Vector datatype
void explainVector() {
    vector<int> v; //creates an empty container.
    v.push_back(3); //puts this value "3" into the vector v.
    v.emplace_back(7); //dynamically increases size and pushes "7" in the vector v.(it is faster than push_back())
    v.emplace_back(10);
    v.emplace_back(20);
    v.emplace_back(15);

    //iterating on vector v

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " "; //prints second index of v.v[1]
    it = it+2;
    cout << *(it) << " "; //prints fourth index of v.v[3]

    vector<int>::iterator it = v.end(); //points to a location right after the last element, hence need to do it-- to print last value.
    cout << v.back() << " "; //prints the last value of v.

    //printing a Vector

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it : v) {
        cout << it << " ";
    }

    vector<pair<int, int>> vec;
    vec.push_back({1, 7}); //both functions accepts only one value of any datatype.
    vec.emplace_back(1, 2);

    vector<int> v1(5, 20); //vector with 5 instances of 20. 
    vector<int> v2(v1); //copy of vector v1 into v2.

    //erasing values in a vector
    v.erase(v.begin()+1); //erases the value at the given location
    v.erase(v.begin()+2, v.begin()+4); //erases values between v[2] and v[4], [start, end).

    //inserting a value in a vector
    vector<int> v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin()+1, 2, 10); // {300, 10, 10, 100, 100}

    // {10, 20}
    v.pop_back(); //deletes last element of the vector.

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1->{30, 40}, v2->{10, 20}

    v.clear(); //erases the entire vector
}

int main() {

}