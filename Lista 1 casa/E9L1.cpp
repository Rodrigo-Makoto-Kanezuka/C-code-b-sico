#include<stdio.h>
int main()
{
	float p1, p2, atv, ativ, p11, p22, ms; //Mostrando minhas variáveis.
	printf ("Insira sua nota 1 e a nota 2, por fim a nota da atividade respectivamente:\n"); //Pedindo notas...
	scanf ("%f %f %f", &p1, &p2, &atv); //Inserido valores na variáveis.
	p11 = p1*4; //Calculando...
	p22 = p2*4; //Já estou cansado de tantos cáculos.
	ativ = atv*2; //Mais, mais e muito mais cáculos.
	ms = (p11 + p22 + ativ)/10; //MAIS! Cálculos.
	printf ("Sua media e:\n %.2f", ms); //Mostrando o resultado de todos os cáculos anterior.
	return 0; //Terminando o programa
}
