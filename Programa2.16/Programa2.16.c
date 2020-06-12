
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<windows.h>

//parametros de las funciones 
void entrada();
void salida();
void sumar_fila();
void sumar_columna();
void multiplicar_fila();
void multiplicar_columna();
void diagonal_principal();
void diagonal_secundaria();

int f,c,i,j;
int arreglo_1[100][100];

main()
{
	srand (time(NULL)); 
	entrada();
	salida();
	sumar_fila();
	sumar_columna();
	multiplicar_fila();
	multiplicar_columna();
	diagonal_principal();
	diagonal_secundaria();
}

void entrada()
{
	do
	{
		system ("cls");
		printf("Cuantas filas quiere: ");
		scanf("%d",&f);
		printf("Cuantas columnas quiere: ");
		scanf("%d",&c);
	}while(f!=c);
	
	for(i=1;i<=f;i++)//indica la fila
	{
		for(j=1;j<=c;j++)//indica la columna
		{
			arreglo_1[i][j]= 0 + rand() % 101;
		}
	}
}

void salida()
{
	
	int opcion;
	printf("\nPrimer Arreglo\n");	
	printf("\n");
	for(i=1;i<=f;i++)
	{
		for(j=1;j<=c;j++)
		{
		 printf("%d\t", arreglo_1[i][j]);	
		}
		printf("\n");
	}	
		do{
		printf("\n1.Sumar alguna Fila: ");
		printf("\n2.Sumar alguna columna: ");
		printf("\n3.Multiplcar alguna Fila: ");
		printf("\n4.Multiplicar alguna columna: ");
		printf("\n5.Conocer el valor de la diagonal principal: ");
		printf("\n6.Conocer el valor de la diagonal secundaria: ");	
		printf("\n7.-Mostrar el arreglo");
		printf("\n8.-No hacer nada");
		printf("\nQue opcion quieres hacer:");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1: sumar_fila(); break;
			case 2: sumar_columna(); break;
			case 3: multiplicar_fila(); break;
			case 4: multiplicar_columna(); break;
			case 5: diagonal_principal(); break;
			case 6: diagonal_secundaria(); break;
			case 7: salida();
			case 8: break;
		}
	}while(opcion!=7);
}

void diagonal_principal()
{
 int sum=0;
 for(i=1;i<=f;i++)
   {
   	for(j=1;j<=c;j++)
   	  {
   	  	if(i==j)
   	  	  {
   	  	  	printf("\n");
			sum=sum+ arreglo_1[i][j];
   	  	  }
   	  }
   }
 printf("\nLa suma es de la diagonal principal es:  %d",sum);
}

void diagonal_secundaria()
{
	int SumaT=0;
  for (i=1;i<=f;i++)
  {
  	for (j=1;j<=c;j++)
  	  {
  	  	if((c+1)==(i+j))
  	  	 {
  	  	   SumaT=SumaT+arreglo_1[i][j];
  	  	 }
  	  }
  }	
  printf("\nLa suma es de la diagonal secundaria es:  %d",SumaT);
}

void sumar_fila()
{
	int fila;
	int suma=0;
	
	printf("\nQue fila desea sumar del arreglo: ");
	scanf("%d",&fila);
	for(i=1;i<=f;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==fila)
			{
				suma=suma+arreglo_1[i][j];
			}
		}
	}
	printf("\nLa suma de la fila %d es: %d ",fila,suma);	
}

void sumar_columna()
{
	int columna;
	int total=0;
	
	printf("\n");
	printf("\nQue columna desea sumar: ");
	scanf("%d",&columna);
	
	for(i=1;i<=f;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(j==columna)
			{
				total=total+arreglo_1[i][j];
			}
		}
	}
	printf("\nLa suma de la columna %d es: %d",columna,total);
}

void multiplicar_fila()
{
	int fil;
	int multiplicacion=1;
	printf("\n");
	printf("\nQue fila desea multiplicar: ");
	scanf("%d",&fil);
	
	for(i=1;i<=f;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==fil)
			{
				multiplicacion=multiplicacion*arreglo_1[i][j];
			}
		}
	}
	printf("\nEl resultado de la multiplicacion de la fila %d es: %d",fil,multiplicacion);
}

void multiplicar_columna()
{
	int colum;
	int multiplicacion=1;
	printf("\n");
	printf("\nQue columna desea multiplicar: ");
	scanf("%d",&colum);
	
	for(i=1;i<=f;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(j==colum)
			{
				multiplicacion=multiplicacion*arreglo_1[i][j];
			}
		}
	}
	printf("\nEl resultado de la multiplicacion de la columna %d es: %d",colum,multiplicacion);
}


