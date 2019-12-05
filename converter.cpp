#include<stdio.h>
int main()
{
	float number;float answer;
	int choice;
	printf("fahrenhit to celcius");
	printf("celcius to kalvin");
	printf("enter a number \t");
	scanf("%f,&number");
	printf("enter choice");
	scanf("%d,&choice");
	if(choice==1)
	{
		answer=32*number;
	  }
	else
	if(choice==2);
	{
		answer=number/273.15;
	  }
	printf("the result is %f",answer);
}
	
