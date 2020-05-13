#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

main()
{
	srand(time(NULL));
	int N,minimo,maximo,menor,mayor,n,j,i;
    
	printf("Cantidad de numeros: ");
	scanf("%d",&N);
	int arr[N];	
	int segundo_arr[N];
	
	printf("Desde que valor quiere empezar? ");
	scanf("%d",&minimo);
	printf("Desde que valor quiere terminar? ");
	scanf("%d",&maximo);
	
	for(i=0;i<N;i++)
	{
    	arr[i] = rand() %  (minimo - maximo) + minimo;
    }
	
	printf("Los numeros del arreglo son: \n");
	for(i=0;i<N;i++)
	{
		printf("num[%d]: %d\n", i, arr[i]);
	}
	
	mayor = arr[0];
	menor = arr[0];
	for(i=0;i<N;i++)
	{
		if(mayor<arr[i])
		{
			mayor=arr[i];
		}
		if(menor>arr[i])
		{
			menor=arr[i];
		}
	}
	printf("\nmenor: %d", menor);
	printf("\nmayor: %d", mayor);
	
	for(i=0;i<N;i++)
	{
    	segundo_arr[i] = rand() %  (menor - mayor) + menor;
    }
    printf("\nLos numeros del arreglo son: \n");
    
	for(i=0;i<N;i++)
	{
		printf("num[%d]: %d\n", i, segundo_arr[i]);
	}
	
	n = N*2;
	int tercer_arr[n];
	
	for(i=0, j=0; i<n; i+=2, j++)
	{
		tercer_arr[i] = arr[j];
		tercer_arr[i+1]= segundo_arr[j];
	}
	for(i=0; i<n; i++)
	{
		printf("\n[%d]", tercer_arr[i]);
	}
		
	
	getch();
}
