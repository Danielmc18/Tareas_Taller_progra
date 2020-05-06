#include<stdio.h>
#include<conio.h>

int sacar_primo(int num)
{	
	int i;
	if(num<2)
	{
		return 0;	
	}
	for(i=2; i < num; i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

main()
{
	srand (time(NULL)); 
	
	int i,N,minimo,maximo;
	int pares=0;
	int impares=0;
	int primos=0;
	
	printf("Ingrese los valores que ocupe [%d]: ",N);
	scanf("\n%d",&N);
	
	int arr[N];
	
	printf("Desde que valor quiere empezar? ");
	scanf("%d",&minimo);
	printf("Desde que valor quiere terminar? ");
	scanf("%d",&maximo);
	
	for(i=0;i<N;i++)
	{
		arr[i] = rand() %  (minimo - maximo) + minimo;
	}	
	
	for (i=0; i<N; i++)
	{
	   printf("%d," ,arr[i]);
	   if(arr[i]%2==0)
	   {
	   	pares += 1;
	   }
	   else
	   {
	   	impares += 1;
	   }
	   primos += sacar_primo(arr[i]);
	}
	printf("\nHay %d pares", pares);
	printf("\nHay %d impares",impares);
	printf("\nHay %d primos",primos);
		
	getch();
}
