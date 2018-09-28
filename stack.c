#include<stdio.h>

int max_size = 8;
int stack[8];
int top = -1;

int isempty()
{
	if(top == -1)
	{
	return 1;
	}
	else
	{
	return 0;
	}
}

int isfull()
{
	if(top == max_size)
	{
	return 1;
	}
	else
	{
	return 0;
	}
}

int push(int data)
{
	if(!isfull())
	{
		top = top+1;
		stack[top] = data;
		printf("Added %d to stack\n",data);
	}
	else
	{
		printf("Stack full!\n");
	}
}

int pop()
{
int data;
	if(!isempty)
	{
		data = stack[top];
		return data;
		top = top-1;
		printf("%d removed from stack\n", data);
	}
	else
	{
		printf("Stack empty!\n");
	}
}

int main()
{
	pop();
	push(10);
	push(11);
	push(12);
	push(13);
	push(14);
	push(15);
	push(16);
	push(17);
	push(18);
	push(19);
	pop();
return 0;
}
