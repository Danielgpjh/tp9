#include <stdio.h>
#include <stdlib.h>
int main() 
{
	
	int matriz [5][5];
	
	int i,j,ventamayor=0,empleado=0;
	
	for (i=0;i<5;i++)
		
	{
		printf("numero del vendedor es %d \n",i+1);
		
		for (j=0;j<5;j++)
		{
			printf("ingrese cuantas ventas hizo en el dia %d: \n",j+1);
			scanf("%d",&matriz[i][j]);
			
			if (matriz[i][j]>ventamayor)
			{
				
				ventamayor=matriz[i][j];
				empleado=i+1;
				
				
			}
			
			
		}
	}
		printf("\n");
		
		for (i=0;i<5;i++)
			
		{
			printf("numero del vendedor es %d \n",i+1);
			
			for (j=0;j<5;j++)
			{
				printf("en el dia%d se vendio :%d $\n",j+1,matriz[i][j]);
				
			}
	
			printf("\n");
		}
		
		printf("la mayor venta fue %d y el empleado fue el numero %d \n",ventamayor,empleado);
	
	return 0;
}
