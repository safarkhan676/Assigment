#include<stdio.h>
int main()
{
	int a1=0,b2=1,ans=0,n;
	printf("Enter a positive number:");
	scanf("%d",&n);
 
 	printf("fibonacci series: %d,%d,",a1,b2);
	ans=a1+b2;
	
	while(ans<=n)
	{
		printf("%d",ans);
		a1=b2;
		b2=ans;
		ans=a1+b2;
	}
	return 0;
}
