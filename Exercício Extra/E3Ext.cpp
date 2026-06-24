#include<stdio.h>
int main () {
	int A[10], a, p, i = 0, m, f = 9; //Declarando munha variáveis e vetores
	for (a = 0; a < 10; a++) { //Código de laço para leitura
		printf ("Digite um numero:\n"); //Mensagem para o usuário
		scanf ("%i", &A[a]);} //Passando valores para minha variável
	for (a = 0; a < 10; a++) { //C´pdigo de laço para ordenação
		for (int b = a + 1; b < 10; b++) { //Outo código de laço...
			if (A[a] > A[b]) { //Fazendo...
				int c = A[b]; //Troca de valores...
				A[b] = A[a]; //Para ordenar meu vetor...
				A[a] = c;}}} //Com o burblle sort.
	printf ("Pesquise um numero na matriz:\n"); //Mensagem para o usuário
	scanf ("%i", &p); //Passando valores para minha variável
	do { m = (i + f) / 2; //Usando o do (código de laço) para pesquisa binária
		if (p > A[m]) { //Se o número pesquisado maior que a metade
			i = m + 1;} //o inicio passa para depois do meio
		else if (p < A[m]) { //Se o meu número for menor que a metade...
			f = m - 1;}} while (p != A[m] && i <= f); //Passo meu fim para antes do meu meio, enquanto minha pesquisa for diferente da metade E meu início maior ou igual ao fim
	if (p == A[m]) { //Se minha pesquisa for igual ao meio, segue
		printf ("Seu numero foi encontrado na posicao %i da matriz", m);} //Mensagem para o usuário
	else { //Senão...
		printf ("Seu numero nao foi encontrado no vetor...");}	 //Mensagem para o usuário
	return 0;} //Fim do programa :)
