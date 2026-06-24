#include<stdio.h>
int main()
{
	float n1, n2, n3, n4, notafinal; //Indicando minhas variáveis.
	printf ("Digite a nota das quatro provas:\n"); //Deixando o usuário digitar as 4 notas.
	scanf ("%f %f %f %f", &n1, &n2, &n3, &n4); //Lendo e transferindo os valores para as 4 variáveis.
	notafinal = (n1 + n2 + n3 + n4)/4; //Calculando...
	printf ("Sua nota ai:\n %.2f", notafinal); //Mostrando nota final.
	return 0; //Terminando este sistemas.
}
