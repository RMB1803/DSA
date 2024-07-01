#include<bits/stdc++.h>
using namespace std;

//Function
// int sum(int num1, int num2) {
//     int num3;
//     num3 = num1 + num2;
//     return num3;
// }

//Pass by Value
// void nameChange(string name) {
//     name[0] = 'L';
//     cout << name << endl;
// }

//Pass by Reference
// void nameChange(string &name) {
//     name[0] = 'L';
//     cout << name << endl;
// }

//Arrays always go with reference, other data structures don't.
void something(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main() {
    //string and getline
    // string str, str1;
    // getline(cin, str); //used to print the entire string input given
    // getline(cin, str1);
    // cout << str << endl << str1;

    // char ch = 'g';
    // cout << ch;

    //if-else
    // int age;
    // cin >> age;

    // if(age >= 18) {
    //     cout << "Adult";
    // } else{
    //     cout << "Not an Adult";
    // }

    //switch

    // int day;
    // cin >> day;

    // switch (day){
    //     case 1: cout << "Monday";
    //     break;
    //     case 2: cout << "Tuesday";
    //     break;
    //     case 3: cout << "Wednesday";
    //     break;
    //     case 4: cout << "Thursday";
    //     break;
    //     case 5: cout << "Friday";
    //     break;
    //     case 6: cout << "Saturday";
    //     break;
    //     case 7: cout << "Sunday";
    //     break;
    //     default: 
    //         cout << "Invalid Input";
    //         break;
    // }

    // int num1, num2;
    // cin >> num1 >> num2;
    
    // int result = sum(num1, num2);
    // cout << result;

    //Pass by Value example
    // string name = "Duke";
    // nameChange(name); //output: Luke
    // cout << name << endl; //output: Duke only

    //Pass by reference example
    // string name = "Duke";
    // nameChange(name); //output: Luke
    // cout << name << endl; //output: Luke

    int n = 5;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }

    something(arr, n);
    cout << "Value inside int main: " << arr[0];
}
