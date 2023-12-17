#include<iostream>

using namespace std;

void lire(int *n, int *t);
void trier(int *n, int *t);
void afficher(int *n, int *t);

int main() {
    int *n = new int; 
    cout << "Array size: ";
    cin >> *n;

    int *t = new int[*n]; 

    lire(n, t);
    trier(n, t);
    afficher(n, t);

    delete n;
    n = NULL;
    delete[] t;
    t = NULL;

    return 0;
}

void lire(int *n, int *t) {
    for (int i = 0; i < *n; i++) {
        cout << "A[" << i + 1 << "] : ";
        cin >> *(t + i);
    }
}

void trier(int *n, int *t) {
    int temp;
    for (int i = 0; i < *n - 1; i++) {
        for (int j = i + 1; j < *n; j++) {
            if (t[i] > t[j]) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}

void afficher(int *n, int *t) {
    for (int i = 0; i < *n; i++) {
        cout << "A[" << i + 1 << "] = " << t[i] << endl;
    }
}