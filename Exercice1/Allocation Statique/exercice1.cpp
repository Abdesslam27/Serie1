#include<iostream>

using namespace std;

int tab(int n , int T[20]){
	for(int i = 0 ; i < n ; i++){
		cout << "Element "<< i+1 << " = ";
		cin >> T[i];
	}
}

int trier(int T[20] , int n){
	int temp ;
	for (int i = 0 ; i< n ; i++){
		for(int j = i+1 ; j < n ; j++){
			if(T[i]>T[j]){
				temp = T[i] ;
				T[i] = T[j] ;
				T[j] = temp;
			}
		}
	}
}


int fusionner(int T1[20] , int n , int T2[20] , int T[20] , int x ){
	for(int i = 0 ; i < n ; i++){
		T[i] = T1[i];
		T[i+n] = T2[i];
	}
}

int afficher(int x , int T[20]){
	for (int i = 0 ; i < x ; i ++){
		cout << "Element " << i+1 << " : " << T[i];
		cout << "\n" ;
	}
}
int main(){
	int n ;
	cout << "Combien d'element dans le tableau : ";
	cin >> n;
	int x = n+n;
	int A[n];
	int C[x];
	int B[n];
	cout << "\n Tableau A : \n";
	tab(n , A);
	cout << "\n Tableau B : \n";
	tab(n , B);
	
	fusionner(A , n , B , C , x);
	
	trier(C , x );
	
	
	cout << "\n Tableau A : \n";
	afficher(n , A);
	cout << "\n Tableau B : \n";
	afficher(n , B);
	cout << "\n Tableau C : \n";
	afficher(x , C);
	system("pause>0");
	
}
