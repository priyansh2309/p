#include<stdio.h>
int main ()
{
	int sum=0,i,n;
	printf("enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
    }
    printf("sum of square of %d natural number is :%d" ,n,sum);
	
}


