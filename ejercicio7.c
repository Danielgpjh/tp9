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
	for (i=0;i<3;i++)
		
	{
		
		
		for (j=0;j<3;j++)
		{
			printf(" %d ",matriz1[i][j]);
			
		}
		
		printf("\n");
	}
	printf("\n\n");
	for (i=0;i<3;i++){
		
		
		for (j=0;j<3;j++)
		{
			
				
				if (matriz1[i][j]<0)
				{
					
					matriz1[i][j]=0;
					
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
	
	
	return 0;
	
}

