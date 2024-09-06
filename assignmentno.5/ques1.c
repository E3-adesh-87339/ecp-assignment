#include <stdio.h>
  


  int main()
  {

  float arr[5];
  float sum=0;
  float avr=0;
   int i;
  
  printf("enter the 5 subject marks\n");

  for(int i=0;i<5;i++)
  {
 scanf(" %2f", &arr[i]);
 
 }
 int j;
for( j=0;j<5;j++)
{
	
	sum = sum + arr[i];
}
 printf("sum of 5 sub is %.2f\n ",sum);

 avr = sum / 5;
 printf ("avreage of subject is %.2f\n",avr);

return 0;
  }
