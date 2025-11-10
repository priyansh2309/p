#include<stdio.h>
void enqueue(int queue[],int front ,int rear,int value,int size);
int main()
{
	int n;
	printf("ENTER THE SIZE OF QUEUE =");
	scanf("%d",&n);
	int queue[n];
	int front=-1,rear=-1;
	enqueue(queue[],&front,&rear,10,n);
	
}
void enqueue(int queue[],int *front,int *rear,int value,int size)
{
	if(rear==size-1)
	{
		printf("queue is full")
	}
	else if(front=rear=-1)
	{
		*front++;
		*rear++;
		queue[rear]= value;
		printf("%d inserted in queue",value);
	}
}
