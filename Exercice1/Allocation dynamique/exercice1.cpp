#include <iostream>

using namespace std;

void tab(int n, int *T) {
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " = ";
        cin >> T[i];
    }
}

void trier(int *T, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (T[i] > T[j]) {
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
        }
    }
}

int *fusionner(int *T1, int n, int *T2, int m, int &x) {
    int *T = new int[n + m];
    for (int i = 0; i < n; i++) {
        T[i] = T1[i];
    }
    for (int i = 0; i < m; i++) {
        T[i + n] = T2[i];
    }
    x = n + m;
    return T;
}

void afficher(int x, int *T) {
    for (int i = 0; i < x; i++) {
        cout << "Element " << i + 1 << " : " << T[i] << "\n";
    }
}

int main() {
    int n;
    cout << "Combien d'element dans le tableau : ";
    cin >> n;

    int *A = new int[n];
    int *B = new int[n];
    int *C;
    int x;

    cout << "\n Tableau A : \n";
    tab(n, A);
    cout << "\n Tableau B : \n";
    tab(n, B);

    C = fusionner(A, n, B, n, x);

    trier(C, x);

    cout << "\n Tableau A : \n";
    afficher(n, A);
    cout << "\n Tableau B : \n";
    afficher(n, B);
    cout << "\n Tableau C : \n";
    afficher(x, C);

    delete[] A;
    delete[] B;
    delete[] C;

    system("pause>0");

    return 0;
}

