#include<stdio.h> 
#include<math.h> //Biblioteca para o pow (potência).
int main (){
	int a, b; //Indicando minhas variáveis.
	for (a = 0; a <= 15; a++){ //Usando o for (por mais que eu não goste, gosto muito mais do do... while) colocando todo contador em uma linha
		b = pow(3,a); //Repetindo sempre a operação.
		printf ("3 elevado a %i e: %i\n", a, b);} //E em cada repetição sempre mostrar
	return 0;} //Fim do programa...
