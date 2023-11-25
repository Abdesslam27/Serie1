#include<iostream>

using namespace std;

int initialiser(int A[][20], int n);
int somme(int A[][20], int B[][20], int C[][20], int n);
int sup(int A[][20], int n);
void afficher(int A[][20], int n);
int prod(int A[][20] , int B[][20] , int D[][20] , int n);
int main() {
    int n;
    cout << "Matrice size : ";
    cin >> n;
    int A[20][20];
    int B[20][20];
    int C[20][20];
    int D[20][20];

    initialiser(A, n);
    initialiser(B, n);
    somme(A, B, C, n);
    sup(A, n);
    sup(B, n);
	prod(A,B,D,n);
	cout << "\n La Matrice A : \n";
	afficher(A , n);
	cout << "\n La Matrice B : \n";
	afficher(B , n);
    cout << "\n La somme : \n";
    afficher(C, n);
    cout << "\n Le produit : \n";
	afficher(D , n );
}

int initialiser(int A[][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> A[i][j];
        }
    }
}

int somme(int A[][20], int B[][20], int C[][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int produit(int A[][20], int B[][20], int D[][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            D[i][j] = A[i][j] * B[i][j];
        }
    }
}

int sup(int A[][20], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] > 50) {
                s++;
            }
        }
    }
    return s;
}

void afficher(int A[][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "] : " << A[i][j] << " ";
        }
        cout << endl;
    }
}

int prod(int A[][20] , int B[][20] , int D[][20] , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			D[i][j] = ((A[i][j] * B[i][j]) + (A[i+1][j]*B[i][j+1]));
		}
	}
}
