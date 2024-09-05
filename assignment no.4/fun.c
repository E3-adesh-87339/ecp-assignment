//Using global variables (for result)
#include <stdio.h>
  
  int rsum,rprod;
 int calc(int n1,int n2,int *mul);
 int main()
  {	
  	int n1=10,n2=20;
	rsum = calc(n1,n2,mul);
	rprod = calc(n1,n2,&mul);
	printf("sum of two no, is %d\n",rsum);
	printf("product of two no. is %d\n",rprod);
	 
	 return 0;
	 }

int calc(int n1,int n2)
{

 return n1+n2;


}
 



