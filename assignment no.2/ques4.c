/*Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.
*/


#include <stdio.h>
int main ()
{
int n1,n2,res;
	printf("enter two numbers\n");
	scanf("%d%d",&n1,&n2);

	if (n1>n2)
	
	{
		printf("number %d  is greater\n",n1);
		
	}
	else
	{
		printf ("number %d is greater\n",n2);
	}

return 0;

}
