/* Teste em C++ feito por Felipe Aguiar para aprender sobre logica e estruturas de repeti��o, este exerc�cio visa calcular o sal�rio l�quido de cada funcion�rio, j� com al�quota 
do imposto de renda referente ao seu s�lario, com if aninhado e fun��es.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
float salbruto, salliquido, imposto, totbruto=0, totliquido=0,totimposto=0;
int contfunc;
for (contfunc=1;contfunc<=5;contfunc++)
{
printf ("Digite o sal�rio bruto: ");
scanf("%f",&salbruto);
if (salbruto >999)
imposto = salbruto*0.10;
else
if (salbruto >1999)
imposto = salbruto*0.15;
else
if (salbruto >9999)
imposto = salbruto*0.20;
else
if (salbruto >99999)
imposto = salbruto*0.25;
else
imposto = salbruto*0.30;
salliquido = salbruto - imposto;
printf ("Sal�rio Liquido: %.2f \n",salliquido);
totbruto = totbruto + salbruto;
totliquido = totliquido + salliquido;
totimposto = totimposto + imposto;
}
printf ("TOT sal�rio bruto : %.2f \n",totbruto);
printf ("TOT sal�rio l�quido : %.2f \n",totliquido);
printf ("TOT Imposto : %.2f \n",totimposto);
return 0;
}
