#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt","w");
    fputc('R',fptr);
    fputc('a',fptr);

    fputc('h',fptr);

    fputc('u',fptr);

    fputc('l',fptr);
    fclose(fptr);
    return 0;

}