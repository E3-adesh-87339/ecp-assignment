//b. strcpy()

#include <stdio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30];
	printf("enter the string1 :\n");
	scanf("%s",str1);
	strcpy(str2,str1);
	printf("str2 is %s\n",str2);
	printf("copied string is %s\n",str2);



return 0;
}
