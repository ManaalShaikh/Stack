#include<stdio.h>
#define max 5
struct stack
{
	int a[max];
	int top;
}s;

void init()
{
	s.top=-1;
}

int isempty()
{
	int val;
	if(s.top==-1)
		return 1;
	else
		return 0;
}

int isfull()
{
	
	if(s.top==max-1)
		return 1;
	else
		return 0;
}
void push(int num)
{
	if(isfull())
	{
		printf("\n Stack is full");
	}
	else
	{
		s.top++;
		s.a[s.top]=num;
		printf("\n Pushed successfully");
	}
}
void pop()
{
	int val;
	if(isempty())
	{
		printf("\n Stack is empty");
	}
	else
	{
		val=s.a[s.top];
		s.top--;
		printf("\n Poped value=%d",val);
	}
}
void disp()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("%d\t",s.a[i]);
	}
}

void main()
{
	int ch,num;
	init();
	do{
		printf("\n MENU \n 1.PUSH \n 2.POP \n 3.DISPLAY \n");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n Enter a number:");
				scanf("%d",&num);
				push(num);
				break;
			case 2:pop();
				break;
			case 3:disp();
				break;
			default:printf(" \n INVALID CHOICE ");
				break;
		}
	}while(ch<4);
}
