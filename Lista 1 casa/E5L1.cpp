#include<stdio.h>
int main()
{
	float m, h , IMC; //Indicando as variáveis... :/
	printf ("Me fale teu peso em Kg:\n");	//Interagindo com o usuário.
	scanf ("%f", &m); //Passei o valor para "m".
	printf ("Me fale tua altura em cm:\n"); //Mais uma das interações...
	scanf ("%f", &h); //Passando valores, teclado para variável...
	h = h/100; //Ajustando o tamanho da pessoa para metros.
	IMC = m / (h*h); //Calculando IMC.
	if (IMC>=25.0){ //Usando se... :)
	printf ("Hora de fazer um regiminho...\nSeu IMC e:\n %.2f", IMC);} //Uma mensagem se tu estiver no sobrepeso :D
	else{
	printf ("Seu IMC e:\n %.2f", IMC);} //Outra mensagem para quem estiver no peso normal. ;)
    return 0;
}
