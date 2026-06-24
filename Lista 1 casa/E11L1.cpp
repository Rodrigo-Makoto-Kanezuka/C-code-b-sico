#include<stdio.h>
int main ()
{
	int a, b; //Minhas variáveis inteiras...
	printf ("Diga-me o valor das tuas variaveis a e b, respectivamente:\n"); //Mandando mensagem para o usuário.
	scanf ("%i %i", &a, &b); //Passando valores para as variáveis.
	a = a*b; //Calculando...
	b = a/b; //Mais cálculos.
	a = a/b; //Será que eu estou calculando? Só sei que nada sei...
	printf ("Aqui tuas variaveis... a:\n %i\nE b:\n %i", a, b); //Mostrando minhas variáveis.
	return 0; //Fim.
}
