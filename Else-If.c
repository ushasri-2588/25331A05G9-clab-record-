#include<stdio.h>
int main()
{
	int Marks;
	printf("Enter your Marks : ");
	scanf("%d",&Marks);
	if(Marks>=90 && Marks<=100)
	{
	printf("Grade A+\n");
	}
	else if(Marks>=80)
	{
	printf("Grade A\n");
	}
	else if(Marks>=70)
	{
	printf("Grade B\n");
	}
	else if(Marks>=60)
	{
	printf("Grade C\n");
	}
	else if(Marks>=50)
	{
	printf("Grade D\n");
	}
	else if(Marks>=0)
	{
	printf("Fail\n");
	}
	else
	{
	printf("Invalid Marks\n");
	}
	printf("\n     25331A05G9");
	return 0;
}
