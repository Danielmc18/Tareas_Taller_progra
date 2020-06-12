#include<stdio.h>
void leer_numeros();
void imprimir_numeros();
int N,i,num[50];

main()
{
	leer_numeros();
	imprimir_numeros();
}

void leer_numeros()
{
	printf("Total de numeros:");
	scanf("%d", &N);
	for(i=1;i<=N;i++)
	{
		printf("Introducir un numero:");
		scanf("%d", &num[i]);
	}
}

void imprimir_numeros()
{
	printf("Los numeros del arreglo son:\n");
	for(i=1;i<=N;i++)
	{
		printf("num[%d]:%d\n", i,num[i]);
	}
}
