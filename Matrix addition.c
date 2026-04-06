include<stdio.h>
int main()
{
	int A[10][10],B[10][10],sum[10][10],i,j,rows,columns;
	printf("rows&columns ; ");
	scanf("%d%d",&rows,&columns);
	printf("Elements of 1st Matrix is : ");
	for(i=0;i<rows;i++)
	{
	for(j=0;j<columns;j++)
	{
	scanf("%d",&A[i][j]);
	}
	}
	printf("Elements of 2nd Matrix is : ");
	for(i=0;i<rows;i++)
	{
	for(j=0;j<columns;j++)
	{
	scanf("%d",&B[i][j]);
	}
	}
	for(i=0;i<rows;i++)
	{
	for(j=0;j<columns;j++)
	{
	sum[i][j]=A[i][j]+B[i][j];
	}
	}
	printf("\n Sum of Matrices : \n");
	for(i=0;i<rows;i++)
	{
	for(j=0;j<columns;j++)
	{
	printf(" %d",sum[i][j]);
	}
	printf("\n");
	}
    printf("\n     25331A05G9");
	return 0;
}
