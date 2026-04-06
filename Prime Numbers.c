#include<stdio.h>
int main()
{
	int i,j,n=100,count;
	printf("PRIME NUMBERS B/W 1 to 100");
	for(i=1;i<=n;i++)
	{
	count=0;
	for(j=1;j<=i;j++)
	{
	if(i%j==0)
	{
	count++;
	}
	}
	if(count==2)
	{
	printf(" %d ",i);
	}
	}
	printf("\n");
    printf("\n     25331A05G9");
	return 0;
}

