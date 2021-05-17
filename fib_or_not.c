#include<stdio.h>
int fib(int num)
{
	int a=0,b=1,c;
	if(num==0||num==1)
	{
		return 1;
	}
	while(c<=num)
	{
		c=a+b;
		a=b;
		b=c;
		if(num==c)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int num;
	scanf("%d",&num);
	if(fib(num))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}

