#include<stdio.h>
int main (){
	int a = 1, b = 0, c = 1, d = 1; //Indicando minhas variáveis e passando os valores para elas.
	do {a = b + c; //Forçando um cáulo
		b = c; //Trocando valores
		c = a; //Trocando mais valores
		printf ("%i,", b); //Mostrando a variável
		d++;} while (d < 16); //Acrementando no d enquanto o mesmo for menor que 16
	return 0;} //Fim...
