#include<stdio.h>
int main()
{
	int i,j,rows;
	char alphabet='A';
	printf("Enter no. of rows: ");
	scanf("%d",&rows);
	printf("\n\nFloyd's Triangle\n");
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",alphabet++);
		}
		printf("\n");
	}
	return 0;
	
}
