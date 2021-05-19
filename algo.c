#include<stdio.h>
void algo(int n)
{
	while(n>1)
	{
		if(n%2==0)
		{
			n=n/2;
			printf("%d ",n);
		}
		else
		{
			n=(3*n)+1;
			printf("%d ",n);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d ",n);
	algo(n);
	return 0;
}
