/*
 date: 2024-1-4
 auth: wolf-li

 Purpose: Converts a Fahrenheit temperature to Celsius

*/
#include<stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR ( 5.0f / 9.0f)  // 没有使用整数,整数和整数进行运算的结果还是整数，向下取整， 5 / 9 = 0s

int main()
{
    float fahrenheit;
  
    printf("Enter Fahrenheit temperature:");
    scanf("%f",&fahrenheit);
  
    printf("Celsius equivaient: %.0f\n", (fahrenheit - FREEZING_PT ) * SCALE_FACTOR);
  
    return 0;
}
