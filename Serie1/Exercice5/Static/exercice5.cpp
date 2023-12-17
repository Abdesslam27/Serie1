#include <iostream>
using namespace std;

void permuter(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void permuter(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    
    cout << "Avant permutation : " << endl;
    cout << "a : " << a << ", b : " << b << endl;

    permuter(a, b);
    cout << "Après permutation avec références : " << endl;
    cout << "a : " << a << ", b : " << b << endl;

    a = 5;
    b = 10;

    permuter(&a, &b);
    cout << "Après permutation avec pointeurs : " << endl;
    cout << "a : " << a << ", b : " << b << endl;

    return 0;
}
