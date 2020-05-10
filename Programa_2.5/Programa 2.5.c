#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

void encontrar_valor(int valor,int arreglo[],int n)
{
	int i=0;
	int total=0;
	for(i=1;i<=n;i++)
	{
		if(valor==arreglo[i])
		{
		  	printf("\nEl numero %d se encuentra en el indice %d",valor,i);
		  	total= total +1;
		}
	}
	printf("\nEl numero estaba tantas veces: %d",total);
	printf("\nLos numeros del arreglo son: \n");
	for(i=1;i<=n;i++)
	{
		printf("num[%d]: %d\n", i, arreglo[i]);
	}
}

main()
{
	srand (time(NULL)); 
	int N,n;
	int i=0;
	int resultado;
	int valor;
    
	printf("Cantidad de numeros: ");
	scanf("%d",&N);
	int arr[N];		
	
	for(i=0;i<=N;i++)
	{
		arr[i] = rand() %6+1;
	}
	printf("Los numeros del arreglo son: \n");
	for(i=1;i<=N;i++)
	{
		printf("num[%d]: %d\n", i, arr[i]);
	}
	
	printf("\nCuales es la nueva proporcion del arreglo:");
	scanf("%d",&n);
	int arreglo[n];
	
	printf("Los numeros del arreglo son: \n");
	for(i=1;i<=n;i++)
	{
		arreglo[i]=rand()%6+1;
		printf("num[%d]= %d\n",i, arreglo[i]);
	}
	
    printf("\nQue valor quiere buscar? ");
	scanf("%d",&valor);
	encontrar_valor(valor,arreglo,n);

	getch();
}
