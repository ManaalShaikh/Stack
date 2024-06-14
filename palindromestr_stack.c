#include<stdio.h>
#include<string.h>
#define max 50
struct stack
{
	char a[max];
	int top;	
}s;

void init()
{
	s.top=-1;
}

int isempty()
{
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

void push(char c)
{
	if(isfull())
	{
		printf("\n Stack is full Dont push");
	}
	else
	{
		s.top++;
		s.a[s.top]=c;
	}
}

char pop()
{
	char val;
	if(isempty())
	{
		printf("\n Stack is empty Dont pop");
		return '\0';
	}
	else
	{
	
		val=s.a[s.top];
		s.top--;
		return val;
	}	
}

void main()
{
	int i;
	char s1[20];
	printf("Enter a string:");
	fgets(s1,50,stdin);
	s1[strcspn(s1,"\n")]='\0';
	init();
	for(i=0;s1[i]!='\0';i++)
	{
			push(s1[i]);
	}
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=pop())
		{
			break;
		}
	}
	if(isempty())
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrome");
	}


}
