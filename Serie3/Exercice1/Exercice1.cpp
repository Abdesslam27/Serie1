#include<iostream>
using namespace std;
typedef struct element {
int info;
element *suivant;
void insertDebut (element* &debut, int x );
void insertFin(element * &debut, int x);
void creation (element*&D);
void contasans (element*&D, element *&D1, element*&D2);
void contavec (element *&D, element *&D1, element*&D2);
void afficher (element *&courrant);
void supimer (element *&D);
int main () {
element *D=0;
element *D1=0;
element *D2=0;
creation (D1);
creation (D2);
cout<<"\nListel:\t";
afficher (D1);
cout<<"\nListe2 :\t";
afficher (D2);
int choix;
cout<<"Veuillez Taper: 1: Pour une concatenation sans sacrifice des deux listes originales: 2 Pour une concatatio";
 cin>>choix;
if (choix==1)
{
concatenationSansSacrifice (D1, D2, D3);
cout<<"\nListe obtenue apres concatenation : \n";
afficher (D3);
}
else
{
liste.cpp
liste.cpp > insertFin(element *&, int)
concatenationAvecSacrifice (D1, D2);
cout<<"\nListe obtenue apres concatenation : \n";
afficher (D1);
}
supprimer (D1);
supprimer (D2);
supprimer (D3);
return 0;
}
void insertDebut(element* &debut, int x )
{
element nouveau=new element;
nouveau->info=x;
debut=nouveau;
nouveau->suivant-debut;
}
void insertFin(element * &debut, int x)
{
if(debut==0) insertDebut (debut,x);
element *courant-debut;
while(courant->suivant !=0)
courant=courant->suivant;
courant->suivant=new element;
courant->suivant->info=x;
courant->suivant->suivant=0;
else
{
}
}
