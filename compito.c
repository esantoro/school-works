#include <stdio.h>

/*
Emanuele Santoro <santoro@autistici.org>
License? ma fateci quello che ca**o volete...
Anzi: licenza creative commons ShareAlike, NonCommercial
(NonCommercial?? Che, si può cacciar fuori davvero qualcosa
di commerciale/commerciabile da questo sputo di codice?? )

Tempo perso su sto sorgente: circa 5 minuti
Musica ascoltata: Nanowar - King // I'M THE KING OF THE HAPPY MEAAAAAAAAAAAAAAAL!!!

Enjoy people :-D

EDIT (prima di pubblicare su github.com) :
Da dove viente questo sorgente?
Questo programma dovrebbe risolvere la traccia assegnataci 
dal professore Nigro durante il compito di Mercoledì 17 
(mi pare ma non ne sono sicuro - potrebbe essere) Dicembre.

Non capite a che cazzo serve il codice, quale cappero di 
traccia potrebbe aver generato questo vomito di codice?
TRANQUILLI!! E' tutto ok.
Neanche noi in classe abbiamo trovato facile decifrare 
la traccia.
Quindi tranquilli, non siete dementi. Forse.
 */

int main() {
	int A, B ; // <- variabili temporanee che verranno dall'input
	A=0 ;
	B=0 ;
	int Maggiore=0, Minore=0 ; // <- le variabili verranno ordinate
	int Differenza ;
	int i=0; // <- variabile contatore, rappresenta anche il numero 
	         // processato dal while principale
	long int somma_max = 0 , somma_min = 0 ;

	printf("Inserisci A:  -> ") ;
	scanf("%d" , &A) ;
	printf("\n") ;
	
	// EDIT: 
	// Perchè arrivati a questo livello non ci sono più commenti?
	// Evidentemente cinque righe più su mi son rotto
	// il cazzo di scrivere commenti =)

	printf("Inserisci B:  -> ") ;
	scanf("%d" , &B) ;
	printf("\n") ;

	
	Minore = A>B ? B : A ;
	Maggiore = A>B ? A : B ;

	Differenza = Maggiore-Minore ;
	
	while (i < Minore) {
		if ( i < Differenza) {
			if (i < Minore) somma_min += i ;
			if (i > Minore) somma_max +=  i ;
		}
		else {
			break ;
		}
		i++ ;
	}

	printf("La somma dei numeri minori di %d è %d\n" , Minore , somma_min) ;
	printf("La somma dei numeri maggiori di %d è %li\n" , Minore , somma_max) ;
	
}
