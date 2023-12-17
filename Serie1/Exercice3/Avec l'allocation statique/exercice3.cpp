
// sans l'allocation dynamique : 

#include<iostream>

using namespace std;

int lire(int n , int t[20]);
int trier(int n , int t[20]);
int afficher(int n , int t[20]);

int main(){
	int n ;
	cout << "Donner la taille de votre tableau : ";
	cin >> n ;
	int a[n];
	lire(n , a);
	trier(n , a);
	afficher(n , a);
}

lire(int n , int t[20]){
	for(int i = 0 ; i< n ; i++){
		cout << "A[" << i+1 << "] : ";
		cin >> t[i];
	}
}

trier(int n , int t[20]){
	int temp ;
	for(int i = 0 ; i < n ; i++){
		for(int j = i+1 ; j < n ; j++){
			if(t[i]>t[j]){
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
}

afficher(int n , int t[20]){
	for(int i = 0 ; i < n ; i++){
		cout << "A[" << i+1 << "] = " << t[i] << endl ;
	}
}

