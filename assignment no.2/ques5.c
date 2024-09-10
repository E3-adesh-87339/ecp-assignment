/*Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.
*/


#include <stdio.h>

int main()
{
 int n1,n2,n3;

 	printf("enter three numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if (n1>n2)
	{ 
		if (n1>n3)
		printf("number %d is greater\n",n1);
	}
	else if ( n2>n3)
	{
	printf("number %d is greater\n",n2);
	
	}
	else
	printf("number %d is greater\n",n3);

return 0;
}
