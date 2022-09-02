#include<stdio.h>
int main()
//write a program to enter price of 3 items & print their final cost with gst
{
    float price[3];
    printf("enter prize of 1st item:\n");
    scanf("%f",&price[0]);
    printf("enter prize of 2nd item:\n");
    scanf("%f",&price[1]);
    printf("enter prize of 3rd item:\n");
    scanf("%f",&price[2]);
    printf("total price 1st item:\n%0.2f",price[0] + (0.18 * price[0]));
    printf("\ntotal price 2nd item:\n%0.2f",price[1] + (0.18 * price[1]));
    printf("\ntotal price 3rd item:\n%.2f",price[2] + (0.18 * price[2]));
    return 0;
}