#include<stdio.h>
#include<locale.h>
#include<string.h>
int main () {
	setlocale(LC_ALL, "Portuguese"); //Serve para acentuações em palavras
	int a = 0, b = 0, C[2][50], c= -1, f = 0; //Declarando minhas variáveis e matrizes
	char str[201], Mp[150]; //Declarando minhas strings
	printf ("Digite uma palavra com menos de 200 caracteres:\n"); //Mensagem para o usuário
	scanf ("%200[^\n]s", str); //Passando caracteres para minha variável, ele lê a frase delimitando um número de caracteres para não "estourar" minha string, ainda o [^\n] ignora os espaços... Quanta coisa numa linha!
	fflush(stdin); //Isso limpa o "enter"
	while (str[a] != '\n' && str[a] != '\0') { //Laço... Para... Hmmmmmm... Verdade! Ler quantos caracteres tem cada palavra!
		if (str[a] != ' ') { //Se o caractere for diferente do "espaço"...
			b++;} //Acremento no b.
		else { //Senão...
			c++; //Acremento no c...
			C[0][c] = b; //Passo o número de caracteres para a primeira linha de uma matriz
			b = 0; //Reinicio o meu b
			C[1][c] = c + 1;} //E indico a possição da palavra na segunda linha, ou seja, a segunda linha mostra a posição da palavra na frase e "acima" dela (primeira linha) mostra quantos caracteres ela tem.
		a++;} //Acremento no a
	if (b > 0) { //Serve para ler minha última palavra pois ela termina em '\0'
		c++; //Acremento em c
		C[0][c] = b; //Passo quanto caracteres ela tem
		C[1][c] = c + 1;} //Indico a posição dela
	for (a = 0; a <= c; a++) { //Laço... Para deixar o número de caracteres em ordem crescente
		for (int d = a + 1; d <= c; d++) { //Outro laço...
			if (C[0][a] < C[0][d]) { //Condicional, Se tal coisa for maior que outra
				int e = C[0][a]; //Troco de lugar
				int ee = C[1][a]; //Troco a "parte de baixo" junto...
				C[0][a] = C[0][d]; //Troco a "parte de cima"...
				C[1][a] = C[1][d]; //... E de baixo
				C[0][d] = e; //E por fim termino as trocas...
				C[1][d] = ee;}}} //Através do amado burblle Sort :)
	a = 0; //Reinicio meu a
	b = 0; //Reinicio meu b
	while (str[a] != '\n' && str[a] != '\0') { //Código de laço, ele vai rodar enquanto a frase da string não acabar
		while (str[a] == ' ') { //Enquanto meu caractere for um "espaço"...
			a++; } //Eu pulo ele.
		if (str[a] != '\n' && str[a] != '\0') { //Agora, se não for um laço eu rodo isso...
			f++; //Conto a palavra
			if (f == C[1][0]) { //Se essa palavra for igual a maior da minha matriz (ou seja, da frase)
				while (str[a] != ' ' && str[a] != '\n' && str[a] != '\0') { //Uso um laço para contar suas letras
					Mp[b] = str[a]; //Passo ela para outra string, caractere por caractere...
					a++; //Acremento no meu a, para continuar a "andar" pela minha string
					b++;} //Acremento no meu b, para "andar" no mesmo ritmo da outra string
				Mp[b] = '\0'; break;} //Coloco meu '\0' Para fechar minha string e não mostrar lixo de memória, e saio do meu laço com o break.
			else { //Senão, se minha palavra não for a que eu estou procurando...
				while (str[a] != ' ' && str[a] != '\n' && str[a] != '\0') a++;}}} //Eu "pulo" ela...
	printf ("A maior palavra na sua frase contém %i caracteres, estava na posição %i da frase e é: %s", C[0][0], C[1][0], Mp); //No final mostro para meu usuário, quantos caracteres minha palavra tem, em qual posição ela está da frase e qual é a bendita palavra.
	return 0;} //E finalmente fim do pragrama!
