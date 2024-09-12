//Write a function to calculate power.


#include <stdio.h>

int power(int,int);

int main()
{
	 int num,res,pow;
	 printf("enter the number and its power to : \n");
 	 scanf("%d%d",&num,&pow);
	
	res = power(num,pow);
	printf("power of the given number is %d \n",res);
	return 0;
}


int power(int num,int pow)
{
	int res=1;
	for (int i = pow ; i>=1; i--)
	{
		res =(res * num);
	

	}
	
		return res;
}
