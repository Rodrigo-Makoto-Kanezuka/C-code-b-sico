#include<stdio.h>
#include<locale.h> //Biblioteca para acentos e 'ç'.
int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil.1252"); //For minhas acentuações.
	float t, s, vm; //Minhas variáveis.
	printf ("Digite o espaço percorrido e metros:\n"); //Mensagem...
	scanf ("%f", &s); //Scaneando e passando for variável...
	printf ("Agora redijas quanto tempo tu gastastes em segundos:\n"); //Mais mensagem...
	scanf ("%f", &t); //Passando valores para minha variável.
	vm = s/t; //Cáculos...
	printf ("Aqui tua Velocidade Média:\n %.2f m/s", vm); //Mostrando resultados.
	return 0; //Terminando.
}
