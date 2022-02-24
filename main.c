/*A designed calculator
Created by Bridgith Majune
on Feb, 2022
MIT License
C89 Compiler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   //declaration of variable
    char name[100];
    int k1,k2,diff,product,sum;
    float quot;
    printf("Designed calculator!\n");
    //capture input
    printf("Enter your name: ");
    gets(name);
    printf("enter two integers: ");
    scanf("%d%d",&k1,&k2);
    //copulations
    diff = k1 - k2;
    product = k1 * k2;
    sum = k1 + k2;
    quot = (float)k1/k2;

    //outputs
    printf("Hey %s, here is your results:\n",name);
    printf("%d - %d = %d\n",k1,k2,diff);
    printf("%d * %d = %d\n",k1,k2,product);
    printf("%d + %d = %d\n",k1,k2,sum);
    printf("%d - %d = %d\n",k1,k2,diff);
    printf("%d / %d = %f\n",k1,k2,quot);
    return 0;
}
