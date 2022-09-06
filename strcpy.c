#include<stdio.h>
#include<string.h>
//strcpy(newStr,oldStr)  i.e copies value of old string to new string
int main()
{
char oldstr[] = "oldstr";
char newstr[] = "newStr";
strcpy(newstr,oldstr);
puts(newstr);
return 0;
}