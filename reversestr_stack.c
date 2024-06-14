#include<stdio.h>
#define max 20
struct stack
{
	int a[max];
	int top;
}s;

void init()
{
	s.top=-1;
}
int isfull()
{
	
	if(s.top==max-1)
		return 1;
	else
		return 0;
}
void push(char c)
{
	if(isfull())
	{
		printf("\n Stack is full");
	}
	else
	{
		s.top++;
		s.a[s.top]=c;
		
	}

}
void disp()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("%c",s.a[i]);
	}
}
void main()
{
	char s1[20];
	int i;
	printf("Enter a string:");
	fgets(s1,50,stdin);
	init();
	for(i=0;s1[i]!='\0';i++)
	{
		push(s1[i]);
	}
	printf("\n Reverse string=");
	disp();

}
