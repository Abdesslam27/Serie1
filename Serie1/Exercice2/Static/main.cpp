#include<iostream>

using namespace std;




    struct Produit {

        int code;

        int poids;

        int prix;

    };



void init_par_val(Produit produit) {



    cout << "Entrez le code du produit : ";

    cin >> produit.code;

    cout << "Entrez le poids du produit : ";

    cin >> produit.poids;

    cout << "Entrez le prix du produit : ";

    cin >> produit.prix;

    cout << "Valeurs apr�s initialisation par valeur : " << endl;

    cout << "Code : " << produit.code << ", Poids : " << produit.poids << ", Prix : " << produit.prix << endl;

}
void init_par_add(Produit *produit) {

    cout << "Entrez le code du produit : ";

    cin >> produit->code;

    cout << "Entrez le poids du produit : ";

    cin >> produit->poids;

    cout << "Entrez le prix du produit : ";

    cin >> produit->prix;

    cout << "Valeurs apr�s initialisation par adresse : " << endl;

    cout << "Code : " << produit->code << ", Poids : " << produit->poids << ", Prix : " << produit->prix << endl;

}





void mod_par_add(Produit *produit) {



    cout << "Entrez le code du produit : ";

    cin >> produit->code;

    cout << "Entrez le poids du produit : ";

    cin >> produit->poids;

    cout << "Entrez le prix du produit : ";

    cin >> produit->prix;

    cout << "Valeurs apr�s modification par adresse : " << endl;

    cout << "Code : " << produit->code << ", Poids : " << produit->poids << ", Prix : " << produit->prix << endl;

}





void mod_par_ref(Produit &produit) {



    cout << "Entrez le code du produit : ";

    cin >> produit.code;

    cout << "Entrez le poids du produit : ";

    cin >> produit.poids;

    cout << "Entrez le prix du produit : ";

    cin >> produit.prix;

    cout << "Valeurs apr�s modification par r�f�rence : " << endl;

    cout << "Code : " << produit.code << ", Poids : " << produit.poids << ", Prix : " << produit.prix << endl;

}





void aff_par_ref(const Produit &produit) {

    cout << "Code = " << produit.code << ", Poids = " << produit.poids << ", Prix = " << produit.prix << endl;

}



int main() {

    Produit M1, M2;



    cout << "Initialisation de M1 par valeur :\n" << endl;

    init_par_val(M1);



    cout << "Initialisation de M2 par adresse :\n" << endl;

    init_par_add(&M2);



    cout << "Avant modification (affichage par ref) : \n" << endl;

    cout << "M1 : \n";

    aff_par_ref(M1);

    cout << "M2 : \n";

    aff_par_ref(M2);



    cout << "Modification de M1 par adresse :\n" << endl;

    mod_par_add(&M1);



    cout << "Modification de M2 par ref :\n" << endl;

    mod_par_ref(M2);



    cout << "Apres modification (affichage par ref) :\n" << endl;

    cout << "M1 : \n";

    aff_par_ref(M1);

    cout << "M2 : \n";

    aff_par_ref(M2);



    return 0;

}

