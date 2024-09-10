//write a program to accept 5 subject marks and make the sum and average of it.



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
		 scanf("%2f", &arr[i]);
 
  }
 
	for( i=0;i<5;i++)
	{
	
		sum = sum + arr[i];
	}
 printf("sum of 5 sub is %.2f\n ",sum);

 avr = sum / 5;
 
 printf ("avreage of subject is %.2f\n",avr);

return 0;
  }
