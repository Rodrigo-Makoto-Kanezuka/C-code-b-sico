#include<stdio.h>
int main ()
{
	int x; //Indicando variáveis inteiras
	printf ("Digite seu numero positivo ou negativo:\n"); //Mensagem para o usuário
	scanf ("%i", &x); //Passando valor para x
	if ( x < 0) { //Se x menor que 0, segue
		x = x * -1; //Se o número for negativo, multiplicar por -1 para tirar o -
		printf ("Seu numero positivo e:\n%i", x); //Mensagem do se
		return 0;} //Fim, caso o sistema entre no se.
	printf ("Seu numero positivo e:\n%i", x); //Mensagem para o usuário.
	return 0; //Fim do sitema
}
