#include<stdio.h>
int main ()
{
	float uss, rs; //Demonstrando que os números uss e rs são reais e são as variáveis.
	printf ("Digite quantos US$ tu tem:\n"); //Pedindo para o usuário digitar seu US$.
	scanf("%f", &uss); //Pedindo pra o programa ler o número digitado e colocar na variável uss.
	rs=uss*2.40; //pedindo para calcular o R$ através da variável US$.
	printf ("Voce esta meio pobre, aqui estao os seus:\n %.2f", rs); //Mostrando os R$ com arredondamento de 2 casas após a vírgula
	printf ("\nEm R$"); //Outra mensagem, para o usuário.
	return 0; //terminei o programa.
}
