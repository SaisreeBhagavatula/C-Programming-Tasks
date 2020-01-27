#include<stdio.h>
int main()
{
	int m;
	printf("Enter the marks obtained:");
	scanf("%d",&m);
	if(85<=m && m<=100)
	{
		printf("Grade A");
	}
	else if(70<=m && m<=84)
	{
		printf("Grade B");
	}
	else if(55<=m && m<=69)
	{
		printf("Grade C");
	}
	else if(40<=m && m<=54)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");
	}
	return 0;
}
