#include<iostream>

using namespace std;

void initialiser(int **t, int n);
void somme(int **t, int **t2, int **t3, int n);
int sup(int **t, int n);
void afficher(int **t, int n);
void prod(int **t, int **t1, int **t2, int n);

int main() {
    int *n = new int;
    cout << "Matrice size : ";
    cin >> *n;

    int **A = new int*[*n];
    int **B = new int*[*n];
    int **C = new int*[*n];
    int **D = new int*[*n];

    for (int i = 0; i < *n; ++i) {
        A[i] = new int[*n];
        B[i] = new int[*n];
        C[i] = new int[*n];
        D[i] = new int[*n];
    }

    initialiser(A, *n);
    initialiser(B, *n);

    somme(A, B, C, *n);
    cout << "\n La Matrice A : \n";
    afficher(A, *n);
    cout << "\n La Matrice B : \n";
    afficher(B, *n);
    cout << "\n La somme : \n";
    afficher(C, *n);

    prod(A, B, D, *n);
    cout << "\n Le produit : \n";
    afficher(D, *n);
    cout << "\n La valeur des nombres superieure a 50 dans A est : ";
    cout << sup(A, *n);
    cout << "\n La valeur des nombres superieure a 50 dans B est : ";
    cout << sup(B, *n);

    
    for (int i = 0; i < *n; ++i) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
        delete[] D[i];
    }

    delete[] A;
    delete[] B;
    delete[] C;
    delete[] D;

    delete n;
    n = 0;

    return 0;
}

void initialiser(int **t, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> t[i][j];
        }
    }
}

void somme(int **t, int **t2, int **t3, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t3[i][j] = t[i][j] + t2[i][j];
        }
    }
}

int sup(int **t, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (t[i][j] > 50) {
                s++;
            }
        }
    }
    return s;
}

void afficher(int **t, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "] : " << t[i][j] << " ";
        }
        cout << endl;
    }
}

void prod(int **t, int **t1, int **t2, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t2[i][j] = 0;
            for (int k = 0; k < n; k++) {
                t2[i][j] += t[i][k] * t1[k][j];
            }
        }
    }
}

