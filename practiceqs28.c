#include<stdio.h>
//write a function to convert celsius to fahrenheit
float convertTemp(float celcius);//function declaration
int main()
{
    float celcius;
    printf("enter temprature:\n");
    scanf("%f",&celcius);
    printf("far:%0.2ff",convertTemp(celcius));
    return 0;
}
//function definition
float convertTemp(float celcius)
{
    float far = celcius * 1.8 + 32;
    return far;
}