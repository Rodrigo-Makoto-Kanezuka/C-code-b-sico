#include<stdio.h>
int main ()
{
	float x, y, z; //Indicando variáveis.
	printf ("Digite 3 valores distintos:\n"); //Falando com o usuário.
	scanf ("%f %f %f", &x, &y, &z); //Passando valores para variáveis.
	if ( x == y || x == z || z == y) { //Se x igual que y, ou x igual a z, ou z igual a y, segue o programa.
		printf ("Dois valores com mesmo valor"); //Mensagem para o usuário caso a afirmação de cima seja verdadeira.
		return 0; } //Fim do programa.
	printf ("Seus numeros, em maior para menor sao:\n"); //Mensagem para o usuário
	if (x > y && y > z) { //Caso, se x maior que y e (se essa afirmação for verdadeira) y maior que z (se essa afirmação também for verdadeira) o sistema continua.
		printf ("%.2f Maior,\n%.2f Medio,\n%.2f Menor.", x, y, z); //Resuldado do primeiro if
	} else //Senão
	if (x > z && z > y) { //Se x maior que z e z maior que y (As duas afirmações precisam ser verdadeiras) segue.
		printf ("%.2f Maior,\n%.2f Medio,\n%.2f Menor.", x, z, y); //Resultado do segundo if...
	} else //Senão
	if (y > x && x > z) { //Se y maior que x e x... Tu entendeu eu entendi nós entedemos... mas e se x maior que z (com duas verdades) segue. 
		printf ("%.2f Maior,\n%.2f Medio,\n%.2f Menor.", y, x, z); //Resultado do terceiro if
	} else //Senão...
	if (y > z && z > x) { //Se y maior quer z e z maior que x (com as duas sendo verdadeiras) por causa do "e" (&&) segue
		printf ("%.2f Maior,\n%.2f Medio,\n%.2f Menor.", y, z, x); //Resultado do quarto if
	} else //Mais um senão...
	if (z > x && x > y) { //Se z maior quer x e x maior que y (com as duas sendo verdadeiras) segue
		printf ("%.2f Maior,\n%.2f Medio,\n%.2f Menor.", z, x, y); //Resultado do se o if de cima for verdadeiro.
	} else //Mais senão...
	if (z > y && y > x) { //Se z maior quer y e y maior que x (com as duas sendo verdadeiras) segue
		printf ("%.2f Maior,\n%.2f Medio,\n%.2f Menor.", z, y, x); } //Último resultado possível... :)
	return 0; //Fim do programa... Graças a Deus!
}
