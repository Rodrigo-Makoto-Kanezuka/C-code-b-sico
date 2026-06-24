#include<stdio.h>
#include<locale.h> //Para acenteuações gráficas
int main ()
{
	setlocale (LC_ALL, "Portuguese_Brazil.1252"); //Para indentificar região...
	float a, b, c; //Indicando variáveis.
	printf ("Digite 3 valores distintos:\n"); //Falando com o usuário.
	scanf ("%f %f %f", &a, &b, &c); //Passando valores para variáveis.
	printf ("Seus numeros, em ordem crescente sao:\n"); //Mensagem para o usuário
	if (a >= b && b >= c) { //Caso, se a maior que b e (se essa afirmação for verdadeira) b maior que c (se essa afirmação também for verdadeira) o sistema continua.
		printf ("%.2f,\n%.2f,\n%.2f.", a, b, c); //Resuldado do primeiro if
	} else //Senão
	if (a >= c && c >= b) { //Se a maior que c e c maior que b (As duas afirmações precisam ser verdadeiras) segue.
		printf ("%.2f,\n%.2f,\n%.2f.", a, c, b); //Resultado do segundo if...
	} else //Senão...
	if (b >= a && a >= c) { //Se b maior que a e a maior que c (com duas verdades) segue. 
		printf ("%.2f,\n%.2f,\n%.2f.", b, a, c); //Resultado do terceiro if
	} else //Senão...
	if (b >= c && c >= a) { //Se b maior quer c e c maior que a (com as duas sendo verdadeiras) por causa do "e" (&&) segue
		printf ("%.2f,\n%.2f,\n%.2f.", b, c, a); //Resultado do quarto if
	} else //Mais um senão...
	if (c >= a && a >= b) { //Se c maior quer a e a maior que b (com as duas sendo verdadeiras) segue
		printf ("%.2f,\n%.2f,\n%.2f.", c, a, b); //Resultado do se o if de cima for verdadeiro.
	} else //Mais senão...
	if (c >= b && b >= a) { //Se c maior quer b e b maior que a (com as duas sendo verdadeiras) segue
		printf ("%.2f,\n%.2f,\n%.2f.", c, b, a); } //Último resultado possível... :D
	return 0; //Fim do programa... Graças a Deus!
}

