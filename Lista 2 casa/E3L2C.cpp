#include<stdio.h>
int main ()
{
	float x; //Indicando variáveis reais
	printf ("Digite sua nota:\n"); //Interação com o usuário
	scanf ("%f", &x); //Passando valor para x
	int y = (int)x; //Passando somente a parte inteira para y
	x = x - y; //subtraindo de x as partes inteiras
	if (x == 0) { //Se x for comparado a 0, segue
		printf ("Sua nota e:\n%i", y); //Mensagem do primeiro if
	} else //Senão
	if (x < 0.5 || x == 0.5) { //Se x for menor que 0.5 ou comparado a 0.5, segue
		printf ("Sua nota e:\n%i", y); //Mensagem, vamos mostrar só as partes inteiras...
	} else //Senão...
	if (x > 0.5) { //Se x for maior que 0.5
		y = y + 1; //Soma 1 a partes inteiras
		printf ("Sua nota e:\n%i", y);} //Mostramos quanto a pessoa fica de forma arredondada... :)
	return 0; //Fim... :D
}
