//Write a program to accept two numbers and display division of the two numbers. Check for
//divide by zero error. If divider is zero then display appropriate error message.

#include<stdio.h>
int main()
{
	int num1,num2;
	int res=0;

	printf("enter the numbers\n ");
	scanf("%d%d",&num1,&num2);

	if (num2==0)
	{
		printf("error.....\ncannot divide by zero\n");

	}
	else
	{
	res = num1/num2;
	printf("result is %d\n",res);
	}
















return 0;
}
