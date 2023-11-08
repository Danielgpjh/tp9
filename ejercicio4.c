#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int vector1[10],vector2[10],ultimo=0;
	int i;
	
	
	for(i=0;i<10;i++)
	{
		printf("Ingrese el primer numero %d\n",i+1);
		scanf("%d",&vector1[i]);
		
		vector2[i]=vector1[i];
		
		
	}
	
	
	ultimo=vector1[9];

	
	for(i=0;i<9;i++)
	{
		if(i==0)
		{
			printf("Numero 1: %d\n",ultimo);
			
		}
		if(i>0 || i==0)
		{
			printf(" Numero %d:%d\n",i+2,vector2[i]);
			
		}
		
	}
	
	
	return 0;
}

