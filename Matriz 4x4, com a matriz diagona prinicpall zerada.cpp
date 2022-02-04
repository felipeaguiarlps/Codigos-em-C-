//Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4. Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero).


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int mat[4][4],lin,col;
	for(lin=0;lin<4;lin++)
		for(col=0;col<4;col++)
			
			if(lin==col) //como a diagonal principal é feita das cordenadas 0,0 ; 1,1; 2,2; 3,3; 
		{
			mat[lin][col]=0;
		}
				else
			scanf(" %d",&mat[lin][col]);
			
			
				for(lin=0;lin<4;lin++)
				for(col=0;col<4;col++)
					
					printf("Esses sao os dados da matriz[%d][%d] = %d\n",lin,col, mat[lin][col]);
}

