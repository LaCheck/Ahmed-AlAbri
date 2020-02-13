/*
*Author: Ahmed AlAbri, aalabri2020@my.fit.edu
*Course: CSE 1001, Section 01, Spring 2020
*Project: compton.c
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int angle1, angle2, angle3;
    int m1, m2, m3;
    double h = 6.629 * pow(10, -34);
    double me = 9.11 * pow(10, -31);
    double c = 2.998 * pow(10, 8);
    
    printf("\nEnter the first scattering angle (degrees) : ");
    scanf("%d", &angle1);
    
    printf("\nEnter the second scattering angle (degrees) : ");
    scanf("%d", &angle2);
    
    printf("\nEnter the third scattering angle (degrees) : ");
    scanf("%d", &angle3);
    
    m1 = (h/(me*c))*(1-cos(angle1));
    m1 = (h/(me*c))*(1-cos(angle2));
    m1 = (h/(me*c))*(1-cos(angle3));
    
    
    
    
    return0;
}
