#include<stdio.h>
#include<stdlib.h>

void main()
{
    int R;
    static float pi = 3.14;
    printf("Enter Radius : ");
    scanf("%d",&R);
    float Area = pi*(R*R);
    printf("The Area Is : %.2f",Area);
}