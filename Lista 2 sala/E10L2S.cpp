#include<stdio.h> //Olha professora vou mentir não, dei um ctrl+c e ctrl+v, no exercício 6 da lista 2 casa... Reescrever um programa que fiz em 1 hr e meia é fogo... :/
int main ()
{
	int x; //Indicando as variáveis inteiras.
	printf ("Digite o numero de um mes:\n"); //Mensagem para o usuário
	scanf ("%i", &x); //Passando o valor para x
	switch (x) { //Caso o x seja algum dos valores abaixo...
		case 1: //Caso seja 1, segue
			printf ("Janeiro"); break; //Mensagem pro caso do 1
		case 2: //Caso seja 2, segue
			printf ("Fevereiro"); break; //Mensagem pro caso do 2
		case 3: //Caso seja 3, segue
			printf ("Marco"); break; //Mensagem pro caso do 3
		case 4: //Caso seja 4, segue
			printf ("Abril"); break; //Mensagem pro caso do 4
		case 5: //Caso seja 5, segue
			printf ("Maio"); break; //Mensagem pro caso do 5
		case 6: //Caso seja 6, segue
			printf ("Junho"); break; //Mensagem pro caso do 6
		case 7: //Caso seja 7, segue
			printf ("Julho"); break; //Mensagem pro caso do  7
		case 8: //Caso seja 8, segue...
			printf ("Agosto"); break; //Mensagem pro caso do 8
		case 9: //Caso seja 9, segue...
			printf ("Setembro"); break; //Mensagem pro caso do 9
		case 10: //Caso seja 10, segue... (mais uma vez)
			printf ("Outubro"); break; //Mensagem pro caso do 10
		case 11: //Caso seja 11, segue... ;-;
			printf ("Novembro"); break; //Mensagem pro caso do 11
		case 12: //Caso seja 12, segue... Será que o sistema não cansa de tantas opções?
			printf ("Dezembro"); break;	//Mensagem pro caso do 12
		default : //Se não for nenhuma das opções acima... Segue
		    printf ("Mes invalido");	//Mensagem do default		
	} return 0; //Fim...
}
