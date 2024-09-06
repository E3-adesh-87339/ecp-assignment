//Write a program to demonstrate use of string library functions.
//  a. strlen()


#include <stdio.h>
#include<string.h>

int main()
{
	char str1[20];
	int len;
	printf("enter the string 1 :\n");
	scanf("%s",str1);
	len = strlen(str1);
	printf("length of string is %d\n",len);
	return 0;


}

