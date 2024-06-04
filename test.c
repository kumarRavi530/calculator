#include <stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter first number\n");
    scanf("%d",&a); 
    printf("Enter second number\n");
    scanf("%d",&b);
    printf("Enter the operation you wanna perform  => +,-,*,/ \n");
    scanf(" %c",&op); 
    switch(op)
    {
               case '+':
                   printf("The sum of numbers is %d", a+b);
                   break;
               case '-':
                    printf("The difference of numbers is %d",a-b);
                    break;
               case '*':
                    printf("The product of numbers is %d", a*b);
                    break;
               case '/':
                    if(b == 0) {
                        printf("Invalid Input please change the value of 2nd number");

                        break;
                    }
                    printf("The division of numbers is %f", (float)a/(float)b);
                    break; 
                default:
                	printf("Invalid operation");
                }
     printf(" \n");
    return 0;
    }
