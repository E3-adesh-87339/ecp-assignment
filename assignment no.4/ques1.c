//Write a function to calculate factorial of a given number.


#include <stdio.h>

int fact (int );

int main()
{
	int num,res;
	printf("enter the number\n");
	scanf("%d",&num);
	res = fact(num);
	printf("\nfactorial of number is %d\n",res);
	return 0;
}

int fact(int num)
{
	int fac =1;
	for (int i = num; i>=1; i--)
	{
		fac = fac * i;
		printf("%d *  \t",i);
	}
	return fac;

}
