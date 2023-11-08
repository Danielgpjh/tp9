#include <stdio.h>

int main() {

	int matriz[3][7];
	int i,j,suma=0;
		
	for (i=0;i<1;i++)
	       
	{
		printf("numero del chofer es %d \n",i+1);
		
		for (j=0;j<7;j++)
		{
			printf("ingrese cuantos kilometros hizo en el dia %d: \n",j+1);
			scanf("%d",&matriz[i][j]);
			
			
		}
		printf("\n");
	}
	for (i=0;i<1;i++)
		
	{
		printf("numero del chofer es %d \n",i+1);wd
		
		for (j=0;j<7;j++)
		{
			printf("en el dia%d se recorrio :%d KM \n",j+1,matriz[i][j]);
			
			
			
			suma=suma+matriz[i][j];
		}
		printf("total recorrido en la semana es:%d KM \n",suma);
		suma=0;
		printf("\n");
	}
	return 0;

}
