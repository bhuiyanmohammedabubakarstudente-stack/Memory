#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//aggiunto il 06/02/2026
/* Realizzare il gioco del Memory con le seguenti funzionalità:


Fase preparatoria

il programma genera casualmente la dimensione della matrice quadrata scegliendo un numero tra 4 e 7;
in caso di matrice con numero di elementi dispari inserire lo zero in una posizione casuale;
il programma inserisce nella matrice le coppie di caratteri in modo casuale;
il programma visualizza una matrice di asterischi (tessere coperte);
Gioco
l'utente inserisce le coordinate di due tessere;
il programma scopre le due tessere,  se sono uguali le lascia scoperte, se sono diverse le ricopre dopo 2 secondi;
il gioco finisce quando vengono scoperte tutte le tessere;
a fine gioco il programma segnala il numero di tentativi effettuati dal giocatore;
Effettuare almeno un commit  per ogni funzionalità elencata. */
void maiuscole(int lettere){
	for(int i=65;i<91;i++){
	char k=(char)i;
	
}

}

int main(int argc, char** argv) {
char a;
char k='#';
srand(time(NULL));
int x= rand()%4+4;
int y= rand()%4+4;	
int matrice [x][y];
int dimrighe=sizeof(matrice)/sizeof(matrice[0]);
int dimcolonne=sizeof(matrice[0])/sizeof(matrice[0][0]);
cout<< dimrighe<<endl;
cout<<dimcolonne<<endl;
/*
//trasformo valore ASCII in carattere (solo MAIUSCOLE)
for(int i=65;i<91;i++){
	k=(char)i;
	cout<<k;
}
cout<<endl;*/
for(int i=0;i<dimrighe;i++){
	for(int j=0;j<dimcolonne;j++){
//	int z=rand()%26+65;
//	char a = char(z);
//	cout<<a<<endl;
//matrice[j]=maiuscole(a);
	}
}
//////////////////////////////
for(int i=0;i<dimrighe;i++){
	for(int j=0;j<dimcolonne;j++){
		cout<< matrice[j]<<endl;
}

}
///////////////////////////////////

//stampa matrice
for(int i=0;i<dimrighe;i++){
	for(int j=0;j<dimcolonne;j++){
		cout<< "*"<< " ";
}
cout<<endl;
}
	return 0;

}
