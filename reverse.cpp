#include<stdio.h>
int main()
{
	int n,rev=0,temp,rem;
	printf("Enter the number :");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10 + rem;
		n=n/10;
	}
	printf("reverse of number %d=%d",temp,rev);
}
