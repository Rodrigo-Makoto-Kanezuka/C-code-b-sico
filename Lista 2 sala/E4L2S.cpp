#include<stdio.h>
#include<locale.h> //biblioteca para acentuções... Pelo menos serve para isso
int main ()
{
	setlocale (LC_ALL, "Portuguese_Brazil.1252"); //Localização do idioma
	int a, b, c; //Indicando minhas variáveis inteiras...
	printf ("Digite o tamanho dos 3 lados do triângulo:\n"); //Mensagem para o usuário
	scanf ("%i %i %i", &a, &b, &c); //Passando os 3 valores para as variáveis a, b e c
	if (a + b < c || c + a < b || c + b < a) { //Identificando se os números passados condiz com um triângulo
		printf ("Tamanho dos lados inválidos!"); //Mensagem caso no for um triângulo
	} else //Senão
	if ( a != b && b != c && a != c) { //Identificando o triângulo escaleno
		printf ("Este triângulo é escaleno..."); //Mensagem se for escaleno
	} else //Senão...
	if ( a == b && b == c) { //Identificando triângulo equilátero...
		printf ("Este triângulo é equilátero!"); //Mensagem se for equilátero
	} else {//Senão...
		printf ("Este triângulo é isósceles..."); } //Só sobrou o isósceles, não pode ser outra coisa!
	return 0; //Fim... :D
}
