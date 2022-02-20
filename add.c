#include<stdio.h>

int add(int,int);
int main()
{
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum: %d\n",c);
	return 0;
}

int add(int x,int y)
{
	return x+y;
}
