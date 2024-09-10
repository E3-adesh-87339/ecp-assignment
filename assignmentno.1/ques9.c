//Write a program to convert temperature in Celsius to Fahrenheit and vice versa. 


#include <stdio.h>
int main()
{
 float temp,celc,temp1,celc1;
 printf("enter the temperature in fahrenheit \n");
 scanf("%f",&temp);
 celc = ((temp - 32) * 5/9);
 printf("temperature in celcius is %f\n",celc);
 printf("enter the temperature in celcius \n");
 scanf("%f",&celc1);
 temp1 = ((celc1 * ((float)9/5)) + 32);
 printf("temperature in fahrenheit is %f\n",temp1);

return 0;
}
