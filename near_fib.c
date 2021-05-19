#include<stdio.h>
void near_fib(int num)
{
	int a=0,b=1,c=0,d1,d2;
	while(c<num)
	{
		c=a+b;
		a=b;
		b=c;
	}
	if(c==num)
	{
		printf("True");
		return;
	}
	else
	{
		d1=b-num;
		d2=num-a;
	}
	if(d1<d2)
	{
		printf("%d",b);
	}
	else if(d1>d2)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d %d",a,b);
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	near_fib(num);
	return 0;
}
