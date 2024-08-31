/*Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
*/

#include<stdio.h>
	
	int main()
	
	{	
	int n1,n2,res;
	printf("enter two numbers: \n");
	scanf("%d\n%d",&n1,&n2);
	res=n1+n2;
	printf("sum of two number is=%d\n",res);
	res=n1-n2;
	printf("subtraction of two number is=%d\n",res);
	res=n1*n2;
	printf("sum of two number is=%d\n",res);
	
	return 0;


	}
