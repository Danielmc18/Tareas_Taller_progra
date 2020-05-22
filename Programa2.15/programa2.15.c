#include<stdio.h>
#include<conio.h>

main()
{
	//pal for
	int i=0;
	int j=0;
	
	// tamaño matriz, y minimo y máximo 
	int filas;
	int columnas;
	int minimo=0;
	int maximo=100;
	
	srand(time(NULL));
	
	printf("\nCuantas filas quieres en tu matriz: ");
	scanf("%d",&filas);
	printf("\nCuantas columnas quieres en tu matriz: ");
	scanf("%d",&columnas);
	int calificacion[filas][columnas];
	
	//arreglo aux
	int N = filas*columnas;
	int aux_arr[N];
	int aux_contador = 0;
	
	for(i=0;i<filas;i++)
	{
		//yo controlo las filas
		for(j=0;j<columnas;j++)
		{
			//yo controlo las columnas
			calificacion[i][j] =rand() %  (minimo - maximo) + minimo;
			//copiar valores en el arreglo auxiliar
			aux_arr[aux_contador] = calificacion[i][j];
			aux_contador += 1;
		}
	}
	//Imprimir arreglo
	for(i=0; i < filas; i++){
		printf("\n");
		for(j=0; j < columnas; j++){
			printf("%d,", calificacion[i][j]);
		}
	}
	
	// metodo burbuja para ordenar menor a mayor el arreglo auxiliar
	int aux;
	int errores;
	do
	{
		for(i=0;i<N;i++)
		{
			if(aux_arr[i]>aux_arr[i+1] && i+1 < N)
			{
				aux=aux_arr[i];
				aux_arr[i]=aux_arr[i+1];
				aux_arr[i+1]=aux;
			}
		}
		errores=0;
		
		for(i=0;i<N;i++)
		{
			if(aux_arr[i]>aux_arr[i+1] && i+1 < N) 
			{
				errores=errores+1;
			}
		}
	}while(errores!=0);
	
	//volver a llenar matriz con el arreglo auxiliar
	aux_contador=0;
	for(i=0; i < filas; i++){
		for(j=0; j < columnas; j++){
			calificacion[i][j] = aux_arr[aux_contador];
			aux_contador +=1;
		}
	}
	printf("\n#####ORDENANDO######\n");	
	//imprimir matriz ordenada
	for(i=0; i < filas; i++){
		printf("\n");
		for(j=0; j < columnas; j++){
			printf("%d,", calificacion[i][j]);
		}
	}
	
	getch();
}
