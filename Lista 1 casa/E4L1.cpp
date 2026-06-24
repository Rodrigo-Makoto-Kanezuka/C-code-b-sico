#include<stdio.h>
#include <locale.h> //coloquei esta biblioteca para acentuações em palavras
int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil.1252"); //Coloquei a localição para colocar acentos nas letras.
	float a, b, y, x; //Indiquei as variáveis.
	printf ("Indique a altura do retângulo:\n"); //Mensagem pro usuário.
	scanf ("%f", &a); //Passei o número digitado para varável "a".
	printf ("Agora me indique a largura do retângulo:\n"); //Mais mensagens.
	scanf ("%f", &b); //Passei o valor para "b".
	y = a*b; //Calculando...
	x = a*2 + b*2; //Calculando...
	printf ("A área do seu retângulo e:\n %.1f\nO perímetro do seu retângulo é:\n %.1f", y, x); //Mostrando o valores.
	return 0; //Encerrando o programa.
}
