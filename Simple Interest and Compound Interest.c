#include<stdio.h>
#include<math.h>
int main()
{
	float Principle,Rate,Time,SimpleInterest,CompoundInterest;
	printf("Enter Principle : ");
	scanf("%f",&Principle);
	printf("Enter Rate of Interest : ");
	scanf("%f",&Rate);
	printf("Enter Time (in years): ");
	scanf("%f",&Time);
	SimpleInterest=(Principle*Rate*Time)/100;
	CompoundInterest=Principle*pow((1+Rate/100),Time)-Principle;
	printf("\n SI : %.2f ",SimpleInterest);
	printf("\n CI : %.2f ",CompoundInterest);
    printf("\n     25331A05G9");
	return 0;
}
	

