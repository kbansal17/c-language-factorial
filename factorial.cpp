#include<stdio.h>
main()
{
	int a,i,b=1;
	printf("enter number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	printf("%d",b);
	
}
