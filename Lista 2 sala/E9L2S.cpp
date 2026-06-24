#include<stdio.h>
int main ()
{
	int a, b; //Indicando minhas variáveis inteiras
	printf ("Digite 2 valores inteiros:\n"); //Mensagem para o usuário
	scanf ("%i %i", &a, &b); //Passando os 2 valores para minhas 2 variáveis
	printf ("\n"); //Pulei linha só para ficar mais bonito. :)
	if (a % 4 == 0) { //Se resto de a dividido por 4 ser comparado a 0, segue
		printf ("%i e divisivel por 4\n", a);} //Mensagem para caso, o primeiro if rodar
	if (a % 5 == 0) { //Se o resto da divisão de a por 5 for comparada a 0, segue...
		printf ("%i e divisivel por 5\n", a);} //Mensagem para caso, o segundo if rodar
	if (b % 4 == 0) { //Se resto de a dividido por 4 ser comparado a 0, segue
		printf ("%i e divisivel por 4\n", b);} //Mensagem para caso, o terceiro if rodar
	if (b % 5 == 0) { //Se o resto da divisão de b por 5 for comparada a 0, segue
		printf ("%i e divisivel por 5\n", b);} //Mensagem para caso, o quarto if rodar
	return 0; //Fim do programa :)
}
