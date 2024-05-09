#include<stdio.h>
#include<stdlib.h>


void main ()
{
    float HRA,Basic_Pay,TA,Total_Salary;
    printf("Ener Basic Pay : ");
    scanf("%f",&Basic_Pay);
    HRA = 0.1 * Basic_Pay;
    TA = 0.05 *Basic_Pay;
    Total_Salary = TA +HRA + Basic_Pay;
    printf("Your Salary ==== %.2f",Total_Salary);
}