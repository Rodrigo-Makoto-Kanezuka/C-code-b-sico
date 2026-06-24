#include<stdio.h>
#include<locale.h> //biblioteca para o setlocale
int main ()
{
	setlocale (LC_ALL, "Portuguese_Brazil.1252"); //Definir localização para acentuações...
	int x; //Indicando as variáveis inteiras.
	printf ("Digite o número do curso:\n"); //Mensagem para o usuário
	scanf ("%i", &x); //Passando o valor para x
	switch (x) { //Caso o x seja algum dos valores abaixo...
		case 1: //Caso seja 1, segue
			printf ("\nEngenharia"); break; //Mensagem pro caso do 1 o curso será Engenharia...
		case 2: //Caso seja 2, segue
			printf ("\nEdificações"); break; //Mensagem para o usuário, o break termina o switch
		case 3: //Caso seja 3, segue
			printf ("\nSistemas elétricos"); break; //Mais  mensagens...
		case 4: //Caso seja 4, segue
			printf ("\nTurismo"); break; //Mensagem pro caso do 4
		case 5: //Caso seja 5, segue
			printf ("\nAnálise de sistemas"); break; //Mensagem pro caso do 5
		default: //Caso não seja os numeros entre 1 a 5
		    printf ("Curso inválido");} //Mensagem para o usuário...
	return 0; //Fim do sistema...
}
