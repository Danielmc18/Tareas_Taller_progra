#include<stdio.h>
#include<conio.h>

main()
{
	int i=0;
	int j=0;
	int filas;
	int columnas;
	int valor;
	
	printf("\nCuantas filas quieres en tu matriz: ");
	scanf("%d",&filas);
	printf("\nCuantas columnas quieres en tu matriz: ");
	scanf("%d",&columnas);
	
	int calificacion[filas][columnas];
	
	//Ejemplo de como se ve el arreglo  :  2x2 }
	// 0	      1
//   0[valor1, valor2]     for i representa las filas
//   1[valor3, valor4]     for j representa las columnas
	
	for(i=0;i<filas;i++)
	{
		//yo controlo las filas
		for(j=0;j<columnas;j++)
		{
			//yo controlo las columnas
			printf("dame un valor:");
			scanf("%d", &valor);
			calificacion[i][j] = valor;
		}
	}
	for(i=0;i<filas;i++)
	{
		//yo controlo las filas
		for(j=0;j<columnas;j++)
		{
			//yo controlo las columnas
			printf("[%d]", calificacion[i][j]);
		}
		printf("\n");
	}
	getch();
}
