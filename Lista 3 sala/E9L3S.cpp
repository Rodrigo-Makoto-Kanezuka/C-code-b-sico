#include<stdio.h>
#include<math.h> //Biblioteca para potências
int main (){
	int a, b, c; //Indicando as variáveis
	printf ("Digite a base e a potencia, respectivamente:\n"); //Mensagem para o usuário
	scanf ("%i %i", &a, &b); //Passando valores...
	c = pow (a,b); //Calculos, envolvendo potência
	printf ("O valor da potencia e: %i", c); //Resultado final..
	return 0;} //Fim do programa
