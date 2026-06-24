#include<stdio.h>
int main ()
{
	int x; //Informando variáveis inteiras.
	printf ("Digite seu numero:\n"); //Mensagem para o usuário.
	scanf ("%i", &x); //Passando valor para variável.
	if (x % 2 == 0) { //Informando se x/2 der resto 0.
		printf ("Seu numero e par..."); }  //Mensagem final.
	else { //Senão
		printf ("Seu numero e impar..."); } //Mensagem final do senão...
	return 0; //fim :)
}
