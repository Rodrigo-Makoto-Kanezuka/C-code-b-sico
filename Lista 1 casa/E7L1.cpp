#include<stdio.h>
#include <math.h> //coloquei essa biblioteca para a potência funcionar...
#include <locale.h> //Colocar minhas pontuações de novo.
int main ()
{
	setlocale (LC_ALL, "Portuguese_Brazil.1252"); //Quero acentuações nas minhas palvras!
	float V, A, r; //Mostrei as varáveis.
	printf ("Diga-me o raio da tua esfera em cm:\n"); //Estou perguntando algo para o usuário.
	scanf ("%f", &r); //Passando o valor para "r".
	V = 4*3.1415/3*pow(r,3); //Calculando.
	A = (4*3.1415)*r*r; //Caculando, mais... ;-;
	printf ("O volume da tua esfera é em cm cúbicos:\n %.2f	\n\nA área da superfície da tua esfera e em cm quadrados:\n %.2f", V, A); //Mostrando o resultados dos meus cálculos.
	return 0;
}
