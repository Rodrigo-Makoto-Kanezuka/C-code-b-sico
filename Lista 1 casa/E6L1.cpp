#include<stdio.h>
int main()
{
	float r, C, A, pi; //Indiquei as variáveis.
	printf ("Me diga o raio do teu circulo em cm:\n"); //Pedi o valor de "r" ao usuário.
	scanf ("%f", &r); //Passei o valor para o "r".
	A = 3.1415*(r*r); //Calculei...
	C = 2*3.1415*r; //Calculei mais...
	printf ("Aqui a tua area do circulo em cm quadrados:\n %.2f \nE seu perimetro em cm:\n %.2f", A, C); //Mostrei os valores.
	return 0; //Terminei o prgrama :)
}
