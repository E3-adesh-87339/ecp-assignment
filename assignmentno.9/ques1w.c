//Write a program to read a file character by character and display its content on screen.


#include <stdio.h>

int main()
{
	char ch;
	char arr[50] = "Adesh, Rahul, Amol, Avanish";
	FILE *fptr = fopen("file.txt","w");

	for (int i = 0; arr[i] != '\0'; i++)
	{
		fputc(arr[i],fptr);
	}
	
	fclose(fptr);
return 0;
}
