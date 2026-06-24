#include<stdio.h>
int main () {
	int a; //indicando minha variável...
	for (a = 1; a < 21; a++) { //Para a entre 0 e 21, acrementa sempre 1 que embaixo se repetir... 
		if (a % 2 != 0) { //Se a for impar
			printf("%i e impar\n", a);} //Fale que ele é impar
		else //Senão
		if (a % 2 != 1) { //Se for par.
			printf ("%i e par\n", a);}} //Fale que ele é par
	return 0;} //Fim do programa...
