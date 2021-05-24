#include<stdio.h>
int harshad(int num)
{
	int r,res=0,temp;
	temp=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		res=res+r;
	}
	if(temp%res==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	if(harshad(num))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}



