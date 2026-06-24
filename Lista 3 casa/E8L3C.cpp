#include<stdio.h>
int main () {
	int a = 2; //Indicando e passando vaalores para minha variável inteira
	do {if (a % 2 == 0){ //Sempre força a ver se a é par.
		printf ("%i\n", a);} //exibe o a.
		a++;} while (a < 20);//Enquanto a entre 1 e 20, segue, sempre acrementa 1 ao a...
	return 0;} //fim...
