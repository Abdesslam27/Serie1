#include<iostream>
using namespace std;
 struct processus{ 
    int id; 
    int priori; 
    processus *suivant; }; 


void insertDebut(processus *&debut, int x, int y); 
void insertFin(processus*&debut,int x, int y); 
void creation(processus*&D, int n); 
void afficher(processus*&D); 
void supprimer(processus *& D ); 
void InverserList(processus *&D); 
void suppVal(processus*&D,int val); 
int main (){ 
    int N,M, val, i; 
    cout<<"Donner le nombre de processus:"; 
    cin>>N;
    processus **L=new processus*[N]; 
    for(i=0; i<N;i++){
        L[i]=0;
        cout<<"------------------------------";
        cout<<"\nDonner la taille de la liste "<<i+1<<" : ";
        cin >> M;
        creation(L[i],M); 
    } 
    
    cout<<"------------------------------"; 
    cout<<"\nTableau saisi:\n"; 
    for( i=0; i>val;i++){
        InverserList(L[i]);
    } 
    for(i=0;i<N;i++){
        cout<<"L["<<i+1<<"] = \n";
        afficher(L[i]);
    }


    cout<<"------------------------------";
    cout<<"\nDonner une valeur de priorite a supprimer dans le tableau : ";
    cin >> val;
    for(i=0;i<N;i++){
        suppVal(L[i],val);
        cout<<"L["<<i+1<<"] = \n";
        afficher(L[i]);
    }
}

void insertDebut(processus *&debut, int x, int y)

{ processus *nouveau =new processus;

nouveau->id=x;

nouveau->priori=y;

nouveau->suivant=debut;

debut=nouveau;

}



void insertFin(processus*&debut,int x, int y)

{ if(debut==0)

{

processus*nouveau= new processus;

nouveau->id=x;

nouveau->priori=y;

nouveau->suivant=debut;

debut= nouveau;

}



else

{

processus*courant=debut;

while(courant->suivant!=0){courant=courant->suivant;}

courant->suivant=new processus;

courant->suivant->id=x;

courant->suivant->priori=y;

courant->suivant->suivant=0;

}

}



void creation(processus*&D, int n)

{

int i,x,y;

for(i=0;i<n;i++){

cout<<"Entrer id"<<i+1<<" =";

cin>>x;

cout<<"Entrer priori"<<i+1<<" =";

cin>>y;

insertFin(D,x,y);

cout<<endl;}

}

void afficher(processus*&D)

{

processus*courant=D;

if(courant==0) cout<<"Liste vide\n";

else

while(courant!=0)

{

cout<<"[id="<<courant->id<<"]\t";

cout<<"[priori="<<courant->priori<<"]\t";



cout<<"\n";

courant=courant->suivant;

}

}



void supprimer(processus *& debut )

{

processus * sup;

while (debut!=0)

{

sup=debut ;

debut= debut->suivant ;

delete sup ;

}

}

void InverserList(processus *&d)

{

processus* courant=d;

processus* l=0;



while(courant!=0)

{

insertDebut(l,courant->id, courant->priori);

courant=courant->suivant;

}

supprimer(d);

d=l; 

}



void suppVal(processus*&D, int val)

{

processus* courant;

processus* pred;

if(D!=0 && D->priori==val)

{

courant=D;

D=D->suivant;

delete courant;
courant=0;
return;
}
courant=D;
pred=courant;
while(courant!=0)
{
    if(courant->priori==val )
    {
        pred->suivant=courant->suivant;
        delete courant;
        courant=0;
    }else
    {
        pred=courant;
        courant=courant->suivant;
    }
}
}