/*Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
Perimeter = a + b + c␎ ␏ ␐ ␏ ␑
Area = ␒␓ ␆ ␇␓ ␎ ␆ ␇␓ ␐ ␆ ␇␓ ␑
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.*/




#include<stdio.h>
  #include<math.h>
 
  int main()
  {
  float a,b,c,s,z;
  float pari,area;
  printf("enter the side of triangle:");
  scanf("%f%f%f",&a,&b,&c);
  pari = a+b+c;
  printf("perimeter of triangle is :%.2f \n",pari);
  s = ((a+b+c)/2.0);
  z = sqrt ( s * ( s - a ) * ( s - b ) * ( s - c ) );
  printf("area of triangle is %.2f\n",z);
 
 
  return 0;
 
 
  }



