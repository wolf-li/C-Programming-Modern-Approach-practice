/*
 * @Author: wolf-li
 * @Date: 2024-06-05 23:09:56
 * @LastEditTime: 2024-06-05 23:12:03
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter14/celsius.c
 * talk is cheep show me your code.
 */
#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(){
    float fahrenheit,  celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = ( fahrenheit - FREEZING_PT )*SCALE_FACTOR;

    printf("Celsius equivalentis: %.1f\n", celsius);

    return 0;
}