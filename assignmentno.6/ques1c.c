//f. strrev()


#include <stdio.h>
#include<string.h>

int main()
{
 char str1[40],str2;
 printf("enter the string \n");
 scanf("%s",str1);
 str2 = strrev (str1);
 printf("enter string %s \n",str1);
 printf("reverse string is %s \n",str2);


return 0;
}
