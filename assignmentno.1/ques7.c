/*Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9
3
6
1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639
*/



#include <stdio.h>
int main()
{
int num,temp,a,b,c,d,x,y,z;
printf("enter the 4 digit number\n");
scanf("%d",&num);

a = num/1000;//9
num =num%1000;//361
b = num/100;//3
num = num%100;//361
c = num/10;//6
num =num%10;
d = num;//1
printf("%d\t%d\t%d\t%d\t\n",a,b,c,d);

x=a*1000;
y=b*100;
z=c*10;
printf("%d + %d + %d + %d\n",x,y,z,d);
printf("%d%d%d%d\n",d,c,b,a);



return 0;
}

