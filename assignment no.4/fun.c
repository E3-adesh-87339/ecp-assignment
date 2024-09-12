//Using global variables (for result)
#include <stdio.h>
  
  int rsum;
  int calc(int n1,int n2,int *mul);
  
  int main()
{	
  	int n1=40,n2=2,mul;

	rsum = calc(n1,n2,&mul);
	 
	printf("product of two no. is %d\n",mul);
	printf("sum of two no. is %d\n",rsum);
    return 0;
 }

int calc(int n1,int n2, int *mul)
{
	*mul = n1 * n2;
	return n1+n2;


}
 



