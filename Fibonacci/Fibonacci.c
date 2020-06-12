/*Serie Fibonacci*/


#include<stdio.h>
main()
{
	int N,i,x,y,z;
	printf("Cantidad de valores a generar de la serie: ");
	scanf("%d",&N);
	x=0;
	y:1;
	printf("Serie Fibonacci");
	printf("%d,%d", x,y);
	i=1;
	while(i<=N)
	{
		z=x+y;
		printf("%d",z);
		x=y;
		y=2;
		i=i+1;
	}
}
