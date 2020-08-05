#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, num3;
    double N ;
    double average;
    
    printf("please enter the first number:");
    scanf("%lf",&num1);   
    N = N + 1;
    printf("please enter the next number:");
    scanf("%lf",&num2);
    N = N + 1;
    printf("please enter the next number:");
    scanf("%lf",&num3);
    N = N + 1;
    average = (num1 + num2 + num3)/ N;
    printf("average is %lf",average);
       
	return 0;
	
}
