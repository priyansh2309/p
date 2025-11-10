#include <stdio.h>
#define SIZE 5

int q[SIZE],f=1, r=1;

void enqueue(int v)
{
	if(r==SIZE-1) printf("Full\n");
	else
	{
		if(f==-1) f=0;
		q[++r]=v;
		printf("%d enqueued\n",v);
		
	}
}

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	return 0;
}
