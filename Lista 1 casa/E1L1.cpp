#include<stdio.h>
int main()
{
	float uss, rs; //Demonstrando que os números uss e rs são reais e são as variáveis. 
	printf ("Digite quantos R$ tu tem:\n"); //demonstrando no visor preto (esqueci o nome dele se eu não me engano é terminal) para demonstrar a mensagem entre parenteses. 
	scanf("%f", &rs); //Pedindo pra o programa ler o número digitado e colocar na variável rs. 
	uss=rs/2.40; //pedindo para calcular o uss através da variável rs. 
	printf ("Voce esta meio pobre, aqui estao os seus:\n %.2f", uss); //Mostrando os uss, o "\n" pula linha para baixo, e o "%.2f" se eu não me engano mostra o número "float" com 2 casas após a vírgula.
	printf ("\nEm US$"); //Outra mensagem, para o usuário.
	return 0; //terminei o programa.
	
}
