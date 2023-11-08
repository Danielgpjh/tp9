#include <stdio.h>

int main() {
	
	int matriz1[12][12],matriz2[12][12],iguales=1,cont1=1,cont=2;
	int i,j;
	
	for (i=0;i<3;i++){
		
		for (j=0;j<3;j++){
			printf("ingrese la matriz :");
			scanf("%d",&matriz1[i][j]);
			
			
		}
	
	}
	
	for (i=0;i<3;i++){
		
		
		for (j=0;j<3;j++){
			printf("ingrese la matriz 2: ");
			scanf("%d",&matriz2[i][j]);
			
			
		}
		
	}
	for (i=0;i<3;i++){
		
		
		for (j=0;j<3;j++)
		{
			if (i==j)
			{
			
				if (matriz1[i][j]==matriz2[i][j])
				{
				
					cont1=1;
				
				}
				else 
				{
					cont1=0;
				}
				
			}
			
			
		}
		
	}
	printf("matriz1\n");
	for (i=0;i<3;i++)
		
	{
		
		
		for (j=0;j<3;j++)
		{
			printf(" %d ",matriz1[i][j]);
			
		}
		
		printf("\n");
	}
	printf("matriz2\n");
	for (i=0;i<3;i++)
		
	{
		
		
		for (j=0;j<3;j++)
		{
			printf("%d ",matriz2[i][j]);
			
		}
		
		printf("\n");
	}
	
	if(cont1==1)
	{
		printf("Las diagonales de la ambas matrices  son iguales\n");
		
	}
	else
	{
		printf("Las diagonales de la ambas matrices no son iguales\n");
		
	}
	
	return 0;

}

