#include<stdio.h>
int main () {
	int A[20], B[10], C[10], a, b = 0; //Declarando meus vetores e variáveis
	for (a = 0; a < 20; a++) { //Comando de laço
		printf ("Digite uma valor entre 0 e 9:\n"); //Mensagem para o usuário
		scanf ("%d", &A[a]); //Atribuindo valores para minha variável
		if (A[a] < 0 || A[a] > 9) { //Se o número menor que 0 ou maior que 9, segue
			printf ("Numero invalido... Tente novamente!\n"); //Mensagem para o usuário
			a--;}} //Decremento no a, para voltar para o mesmo local do vetor
	for (a = 0; a < 10; a++) { //Comando de laço...
		B[a] = a;} //Passando valores para um vetor de contagem
	for (a = 0; a < 10; a++){ //Outro comando de laço...
		for (int c = 0; c < 20; c++) { //Mais um comando de laço
			if (B[a] == A[c]) { //Se O número igual a qualquer um de a
				b++;}} //Acremento em b
		C[a] = b; //O numero de vezes que o numero apareceu passa para uma terceira variável.
		b = 0;} //Reiniciando b
	for (a = 0; a < 10; a++) { //Código de laço
		printf ("O numero %i aparece %i vezes...\n", B[a], C[a]);} //Menssagem para o usuário
	return 0;} //Fim do programa...
