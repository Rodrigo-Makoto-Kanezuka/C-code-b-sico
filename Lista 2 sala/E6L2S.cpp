#include<stdio.h>
#include<locale.h> //Biblioteca... De acentos (acompanhada com o setlocale)... :D, não sei se é só para isso mais serve
#include<math.h> //Para colocar raíz quadrada
int main ()
{
	setlocale (LC_ALL,"Portuguese_Brazil.1252"); //Localizção do idioma
	float a, b, c, x1, x2, delta; //Definindo minhas variáveis reais
	printf  ("Digite o valor das suas variáveis A, B e C, respectivamente:\n"); //Mensagem com o usuário
	scanf ("%f %f %f", &a, &b, &c); //Passando valores para a, b e c...
	delta = b*b - 4*a*c; //Definindo Delta
	if (delta < 0) { //Se delta for negativa, a raíz fica inválida
		printf ("Não existe raízes reais..."); //Não há como calcular raizes negativas...
	} else { //Senão
	x1 = (-b + sqrt (delta)) / (2*a); //Fórmula de bhaskara aplicada
	x2 = (-b - sqrt (delta)) / (2*a); //Para o segundo caso de bhaskara
	printf ("O valor de X pode ser:\n %.2f ou %.2f", x1, x2); } //Mensagem...
	return 0; //Fim do programa!!!
}
