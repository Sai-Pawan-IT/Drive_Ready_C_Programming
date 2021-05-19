#include<stdio.h>
int algo_rec(int n)
{
	int a,b;
	if(n==1)
	{
		return 0;
	}
	if(n%2==0)
	{
		a=n/2;
		printf("%d ",a);
		return algo_rec(n/2);
	}
	else
	{
		b=((3*n)+1);
		printf("%d ",b);
		return algo_rec((3*n)+1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d ",n);
	algo_rec(n);
	return 0;
}
