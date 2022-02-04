/* Outro caso de estruturas de repetições usando o Switch para contar o numero de vogais em palavras digitadas, onde "." é o gatilho de saída da estrutura de repetição.
Ass. felipeaguiarlps
*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char letra;
	int conta=0,conte=0,conti=0,conto=0,contu=0;
	while(letra!='.')
	{
	switch (letra)
	{
		case 'a':
			conta++;
			break;
			
		case 'e':
			conte++;
			break;
		
		case 'i':
			conti++;
			break;
			
		case 'o':
			conto++;
			break;
			
		case'u':
			contu++;
			break;
	}

scanf("%c", &letra);
}
printf("\nLetra a %d\n", conta);
printf("Letra e %d\n", conte);
printf("Letra i %d\n", conti);
printf("Letra o %d\n", conto);
printf("Letra u %d\n", contu);
}
	
	
	
	
	
	
	
