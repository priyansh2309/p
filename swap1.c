#include<stdio.h>
void swap(int ,int);
void main(){
	int a,b,c;
	printf("Enter Firdt String:");
	scamf("%d",&a);
	printf("Enter Second String:");
	scanf("%d",&b);
	printf("Before swapping a =%d and b = %d \n",a,b);
	swap(a,b);
	printf("After swapping a=%d and b=%d ",a,b );
	
}
void Swap(int *p, int*q){
	int c;
	c = *p;
	*p = *q;
	*q = c;
}







