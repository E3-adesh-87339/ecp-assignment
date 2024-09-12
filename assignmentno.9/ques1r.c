#include<stdio.h>

int main ()
{
	char ch;
	FILE *fptr = fopen ("file.txt","r");

	while ((ch = fgetc (fptr))!= EOF)
		printf("%c",ch);

	fclose (fptr);

return 0;
}
