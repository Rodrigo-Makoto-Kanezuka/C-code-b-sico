#include<stdio.h>
int main () {
	int a, b, c; //Indicando as variáveis inteiras
	char x; //Indicando que o x vai ser um caractere
	while (1) { //Sempre será verdade
		printf ("\nDigite a operacao\n"); //Mensagem para o usuário
		scanf (" %c", &x); //Passando o caractere para x, nem sabia que precisava desse espaço antes do %c
		if (x == 'S') { //Se 'S' for apertado, segue...
			printf ("O S foi apertado :)"); break;} //O sistema mostra a mensagem e encerra o programa
		printf ("Digite seu primeiro termo:\n"); //Pedindo o primeiro termo
		scanf ("%i", &a); //Passando valor para a
		printf ("Digite seu segundo termo:\n"); //Pedindo o segundo termo
		scanf ("%i", &b); //Passando valor para x
		if (x == '+') { //Se x for o char '+', segue
			c = a + b; //Calculo
			printf ("A reposta da somataria e:\n%i", c);} //Mensagem, sempre voltando para o topo (while)
		else //Senão...
		if (x == '-') { //Se x igual a '-', segue...
			c = a - b; //Calculos...
			printf ("A reposta da subtracao e:\n%i", c);} //Mensagem, sempre volta pro início
		else //Senão...
		if (x == '*') { //Se x igual a '*', segue
			c = a*b; //Calculos
			printf ("A reposta da multiplicacao e:\n%i", c);} //Mensagem e volta pro while
		else //Senão
		if (x == '/') { //Se '/' for apertado
			c = a/b; //Divide os dois termos
			printf ("A reposta da divisao e:\n%i", c);} //Mensagem e volta pro while
		else{ //Senão
			printf ("Operação invalida...\n");}} //Qualquer char diferente das anteriores o sistema envia essa mensagem e volta pro while
	return 0;} //Fim do programa! :D
