#include<stdio.h>
int pronic(int num)
{
	int i;
	for(i=0;i<=num;i++)
	{
		if(i*(i+1)==num)
		{
			return 1;
		}
		if(i*(i+1)>num)
		{
			return 0;
		}
		i++;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	if(pronic(num))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
