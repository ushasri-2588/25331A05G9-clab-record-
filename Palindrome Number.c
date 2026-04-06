#include<stdio.h>
int main()
{
	int num,rev=0,digit,org;
	printf("Enter a number : ");
	scanf("%d",&num);
	org=num;
	while(num>0)
	{
	digit=num%10;
	rev=rev*10+digit;
	num=num/10;
	}
	printf("Reverse : %d\n",rev);
	if(rev==org)
	{
	printf("PALINDROME NUMBERS\n");
	}
	else
	{
	printf("NOT PALINDROME NUMBERS\n");
	}
    printf("\n     25331A05G9"); 
	return 0;
}
