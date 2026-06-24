#include<stdio.h>
int main ()
{
	int a, b, c; //Indicando minhas variáveis inteiras
	printf ("Digite 3 valores inteiros:\n"); //Mensagem para o usuário
	scanf ("%i %i %i", &a, &b, &c); //Passando os 3 valores para meus 3 inteiros
	printf ("\n"); //Pulei linha só para ficar mais bonito
	if (a % 2 == 0) { //Se resto de a dividido por 2 ser comparado a 0, segue
		printf ("%i e divisivel por 2\n", a);} //Mensagem para caso, o primeiro if rodar
	if (a % 3 == 0) { //Se o resto da divisão por 3 for 0, segue...
		printf ("%i e divisivel por 3\n", a);} //Mensagem para caso, o segundo if rodar
	if (b % 2 == 0) { //Se resto de a dividido por 2 ser comparado a 0, segue
		printf ("%i e divisivel por 2\n", b);} //Mensagem para caso, o terceiro if rodar
	if (b % 3 == 0) { //Se o resto da divisão por 3 for 0, segue...
		printf ("%i e divisivel por 3\n", b);} //Mensagem para caso, o quarto if rodar
	if (c % 2 == 0) { //Se resto de a dividido por 2 ser comparado a 0, segue
		printf ("%i e divisivel por 2\n", c);} //Mensagem para caso, o quinto if rodar
	if (c % 3 == 0) { //Se o resto da divisão por 3 for 0, segue...
		printf ("%i e divisivel por 3\n", c);} //Mensagem para caso, o sexto if rodar
	return 0; //Fim do programa :)
}
