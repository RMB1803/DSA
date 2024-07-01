#include<bits/stdc++.h>
using namespace std;


void pattern5(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern6(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i-1; j++) {
            cout << " ";
        }
        for(int j = 1; j <= 2*n-(2*i-1); j++) {
            cout << "*";
        }
        for(int j = 1; j <= i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n) {
    for(int i = 1; i <= 2*n-1; i++) {
        int stars = i;

        if(i > n) stars = 2*n-i;

        for(int j = 1; j <= stars; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n) {
    for(int i = 1; i <= n; i++) {
        int start = 1;
        if(i % 2 != 0) start = 1;
        else start = 0;

        for(int j = 1; j <= i; j++) {
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}

void pattern12(int n) {
    for(int i = 1; i <= n; i++) {
        //numbers
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        //spaces
        for(int j = 1; j <= 2*n-(2*i); j++) {
            cout << " ";
        }
        //numbers
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int n) {
    int a = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}

void pattern14(int n) {
    for(int i = 1; i <= n; i++) {
        for(char ch = 'A'; ch < 'A'+i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern15(int n) {
    for(int i = 1; i <= n; i++) {
        for(char ch = 'A'; ch <= 'A'+(n-i); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern16(int n) {
    char alphabet = 'A';
    for(int i = 1; i <= n; i++) {
        for(char ch = 'A'; ch < 'A'+i; ch++) {
            cout << alphabet << " ";
        }
        cout << endl;
        alphabet++;
    }
}

void pattern17(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            cout << " "; //spaces
        }

        char ch = 'A';
        int reverse = ((2*i-1)/2)+1;
        for(int j = 1; j <= 2*i-1; j++) {
            if(j < reverse) {
                cout << ch++;
            }
            else{
                cout << ch--;
            }  
        }

        for(int j = 1; j <= n-i; j++) {
            cout << " "; //spaces
        }
        cout << endl;
    }
}

void pattern18(int n) {
    for(int i = 1; i <= n; i++) {
        char ch = 'E'-i+1;
        for(int j = 1; j <= i; j++) {
            cout << ch++;
        }
        cout << endl;
    }
}

void pattern19(int n) {
    for(int i = 1; i <= n; i++) {
       for(int j = 1; j <= n-i+1; j++) {
        cout << "*";
       }

       for(int j = 2*n; j > 2*n-2*i + 2; j--) {
        cout << " ";
       }

       for(int j = 1; j <= n-i+1; j++) {
        cout << "*";
       }
       cout << endl;
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        for(int j = 1; j <= 2*n - 2*i; j++) {
            cout << " ";
        }

        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout <<  endl;
    }
}

void pattern20(int n) {
    for(int i = 1; i <= 2*n - 1; i++) {
        if(i > n) {
            for(int j = 1; j <= 2*n-i; j++) {
                cout << "*";
            }

            for(int j = 1; j <= 2*i-2*n; j++) {
                cout << " ";
            }

            for(int j = 1; j <= 2*n-i; j++) {
                cout << "*";
            }
        }
        else{
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }

            for(int j = 1; j <= 2*n - 2*i; j++) {
                cout << " ";
            }

            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void pattern21(int n) {
    for(int i =1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || j == 1 || i == n || j == n) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern22(int n) {
    for(int i = 0; i < 2*n-1; i++) {
        for(int j = 0; j < 2*n-1; j++) {
            int top = i;
            int left = j;
            int right = 2*n-2-j;
            int bottom = 2*n-2-i;

            cout << n-min(min(top, bottom), min(left, right)) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;

    pattern17(n);
}