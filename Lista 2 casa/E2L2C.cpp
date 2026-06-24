#include<stdio.h>
#include <stdlib.h> //Vou mentir não professora, eu pesquisei como usar um random no sistema e pediu para usar isso, que carrega o rand
#include <time.h> //E isso para colocar a hora, para toda vez que entrar no programa gerar um random diferente.
int main ()
{
	int x, y, z; //Indicando as variáveis inteiras.
	srand (time(NULL)); //Isto é meio complexo como você não tinha nos ensinado sobre isso, mas basicamente acompanhado com a rand, a cada segundo o número aleatório é diferente.
	printf ("Digite um numero entre 0 e 100:\n"); //Mensagem para o usuário
	scanf ("%i", &x); //Passando valor para x
	if (x > 100 || x < 0) { //Se x maior que 100 ou (qualquer uma das opções for verdade ele roda) x menor que 0, segue
		printf ("Numero invalido..."); //Mensagem do se
	return 0;} //Fim do sistema
	y = (rand () % 100) + 1; //Um número gerado pelo sistema de forma aleatória (a cada segundo ele muda, pois está acompanhada com srand) com a fórmula sendo (rand () % (máx. - min. + 1) +1).
	if (x < y) { //Se y maior que x, segue...
		z = y - x; //Cálculos.
		printf ("A diferença do seu numero para o numero chave e:\n %i", z);} //Mensagem para o usuário para o caso do if, se for rodado
	else //Senão...
	if (x > y) { //Se x maior que y, segue
	    z = x - y; //Mais cálculos.
	    printf ("A diferença do seu numero para o nuemro chave e:\n %i", z);} //Mensagem para o usuário caso se o segundo if rode...
	return 0; //Fim do programa.
}
