//Write a function to swap two numbers.


#include <stdio.h>

void swap (void)
int main()
{
	int num1,num2;
	printf("enter the two numbers\n");
	scanf("%d%d",&num1,&num2);
	swap();


return 0;
}

void swap (void)
{

	int temp = num1;
	num1 = num2;
	num2= temp;



}
