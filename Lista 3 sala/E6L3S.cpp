#include<stdio.h> 
int main (){ 
	int a, b; //Declarando minhas variáveis inteiras e passando um valor para a.
	a = 15; //Atribuindo valor para a
	do {b = a*a; //Estou forçando sempre uma operação.
		printf ("O quadrado de %i e: %i\n", a, b); //mostrando um valor.
		++a;} while (a < 201); //acrementando na minha variável, e enquanto esta mesma variável permanecer entre 14 e 201.
	return 0; }//Fim...
