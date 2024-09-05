/*Write a function to calculate sum and product into a single function.
a. Using global variables (for result)
b. Without using global variables
*/
#include<stdio.h>
 
 int calc(int n1, int n2,int *sum);
 

 int main()
 {
 int n1=10,n2=20, sum, product;
 product= calc( n1, n2, &sum);
 printf("sum= %d\n",sum);
 printf("product=%d\n",product);


return 0;

 }

 int calc(int n1, int n2,int *sum)
 {
	*sum = n1+n2;
	return n1*n2;

 }

