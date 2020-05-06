#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

bool encontrar_valor(int incognita,int arr[])
{
	int i=0;
	for(i=0;i<10;i++)
	{
		if(incognita==arr[i])
		{
		  return true;	
		}
	}
	return false;
}

main()
{
	srand (time(NULL)); 
	
	int minimo,maximo;
	int correcto=0;
	int incorrecto=0;
	int i=0;
	int incognita;
	int arr[10];
	bool resultado;
    
	
	printf("Desde que valor quiere empezar? ");
	scanf("%d",&minimo);
	printf("Desde que valor quiere terminar? ");
	scanf("%d",&maximo);
	
	
	for(i=0;i<10;i++)
	{
		arr[i] = rand() %  (minimo - maximo) + minimo;
	}
	
	for(i=0;i<3;i++)
	{
		printf("\nQue valor cree que se encuentre ahi? ");
		scanf("%d",&incognita);
		
		resultado=encontrar_valor(incognita,arr);
		if(resultado)
		{
			printf("\n CORRECTO ");
			correcto= correcto +1;
		}
		else
		{
			printf("\n INCORRECTO ");
			incorrecto= incorrecto +1;
		}
	}
	printf("\n RESULTADOS");
	printf("\n Tus correctos fueron: %d", correcto);
	printf("\n Tus errores fueron: %d", incorrecto);
		
	getch();
}
