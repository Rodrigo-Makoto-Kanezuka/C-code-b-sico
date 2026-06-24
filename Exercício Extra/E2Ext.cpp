#include<stdio.h>
int main () {
	int A[15], a; //Declarando meus vetores e variável
	for (a = 0; a < 15; a++) { //Código de laço...
		printf ("Digite um numero:\n"); //Mensagem para o usuário
		scanf ("%d", &A[a]);} //Passando valores para meu vetor
	for (int b = 0; b < 15; b++) { //Código de laço
		for (int c = b + 1; c < 15; c++) { //Outro código de laço par aordenação
			if (A[b] > A[c]) { //Se Meu número inicial maior que meu número "andante"
				a = A[c]; //Troco de valores...
				A[c] = A[b]; //...Com o... 
				A[b] = a;}}} //...Burblle Sort.
	printf ("Seus numeros em ordem crescente:\n"); //Mensagem para o usuário
	for (a = 0; a < 15; a++) { //Código de laço para exibição
		printf ("%i\n", A[a]);} //Mensagem para usuário
	return 0;} //Fim do programa...
