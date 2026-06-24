#include<stdio.h>
int main ()
{
	float aa, la, ap, lp, ara, arp, ta; //Falando para o sistema minhas variáveis Reais.
	printf ("Fale para mim, sua medida da Altura do Azulejo:\n"); //Interagindo com o usuário...
	scanf ("%f", &aa); //Lendo o valor e colocando na variável "aa" Altura dos Azulejos.
	printf ("Fale para mim, sua medida da Largura do Azulejo:\n"); //Mais mensagens para o usuário.
	scanf ("%f", &la); //Lendo, colocando na variável "la".
	printf ("Fale para mim, sua medida da Altura da Parede:\n"); //Mensagens, usuário...
	scanf ("%f", &ap); //Lendo, valor da "ap"...
	printf ("Fale para mim, sua medida da largura da parede:\n"); //Mensagem...
	scanf ("%f", &lp); //Valor para "ap"...
	ara=aa*la; //"ara" é igual a "aa" vezes "la".
	arp=ap*lp; //O valor da direita é transferido para a esquerda.
	ta=arp/ara; //Continuo atribuindo valores para uma terceira variável.
	printf("Aqui na tua parede cabem:\n %.2f \nDe azulejos", ta); //Falando quantos azulejos cabem na parede.
	return 0; //Encerrando o programa.
}
