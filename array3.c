#include<stdio.h>
//pointer value increment or decrement
int main()
{
   int age =20;
    int *ptr = &age;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);
    
   float price = 100.00;
   float *ptr1 = &price;
   printf("ptr1 = %u\n",ptr1);
   ptr1++;
   printf("ptr1 = %u\n",ptr1);
   ptr1--;
   printf("ptr1 = %u\n",ptr1);
   char star = '@';
   char *ptr2 = &star;
   printf("ptr2 = %u\n",ptr2);
   ptr1++;
   printf("ptr2 = %u\n",ptr2);
   ptr1--;
   printf("ptr2 = %u\n",ptr2);


    return 0;

}
