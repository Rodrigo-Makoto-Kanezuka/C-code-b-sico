#include<stdio.h>
int main () {
	int a, b = 0, c; //Indicando minhas variáveis, passando um valor para b
	printf ("Digite qual tabuada tu desejas...\n"); //Mensagem para o usuário
	scanf ("%i", &a); //Ler o valor que foi digitado
	do {c = a*b; //Sempre forçando o cálculo
		printf ("%i x %i = %i\n", a , b, c); //Mostrando a tabuada
		b++;} while (b < 11); //Sempre repetindo enquanto b menor que 11, e sempre acrementando 1 ao b
	return 0;} //Fim do programa :)
